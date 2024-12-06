#pragma once
#include<Windows.h>
#include<iostream>
#include<vector>
#include <string>
#include<time.h>

#define BLOCKMAXSIZE 409600//ÿ�ζ�ȡ�ڴ������С

/*
	����Sunday�㷨���ٶ�λ����
*/
class SunDaySearch{
public:
	SunDaySearch();
	~SunDaySearch();
	inline int SearchMemory(std::string Tzm, unsigned __int64 StartAddress, unsigned __int64 SearchSize, std::vector<unsigned __int64>& ResultArray);
	inline ULONG64 CallBaseCalc(ULONG64 CallAsm, ULONG NextAsmOffset = 5, ULONG BaseOffset = 1) {
		if (!CallAsm)return NULL;
		INT32 Base = *(PINT32)(CallAsm + BaseOffset);
		ULONG64 ReturnBase = (LONG64)CallAsm + (LONG64)NextAsmOffset + Base;
		return ReturnBase;
	}
private:
	inline void SearchMemoryBlock(WORD* Tzm, WORD TzmLength, unsigned __int64 StartAddress, unsigned long size, std::vector<unsigned __int64>& ResultArray);
	inline WORD GetTzmArray(const char* Tzm, WORD* TzmArray);
	inline void GetNext(short* next, WORD* Tzm, WORD TzmLength);
	inline void DelStringBlank(std::string& str);
private:
	BYTE* MemoryData;//ÿ�ν���ȡ���ڴ��������
	short Next[260];
	WORD* TzmArray;
};

SunDaySearch::SunDaySearch() : MemoryData(), Next(), TzmArray() {}


SunDaySearch::~SunDaySearch(){
	delete[] TzmArray;
}
/*
	ɾ��Stringȫ���ո�
*/
void SunDaySearch::DelStringBlank(std::string& str) {
	std::string Tmp;
	for (auto& C : str) {
		if (C != ' ') {
			Tmp.push_back(C);
		}
	}
	str = Tmp;
}

WORD SunDaySearch::GetTzmArray(const char* Tzm, WORD* TzmArray) {
	int len = 0;
	auto Strlen_ = strlen(Tzm);
	WORD TzmLength = Strlen_ / 2;
	//��ʮ������������תΪʮ����
	for (int i = 0; i < Strlen_; ) {
		char num[2];
		num[0] = Tzm[i++];
		num[1] = Tzm[i++];
		if (num[0] != '?' && num[1] != '?'){
			int sum = 0;
			WORD a[2];
			for (int i = 0; i < 2; i++){
				if (num[i] >= '0' && num[i] <= '9')
					a[i] = num[i] - '0';
				else if (num[i] >= 'a' && num[i] <= 'z')
					a[i] = num[i] - 87;
				else if (num[i] >= 'A' && num[i] <= 'Z')
					a[i] = num[i] - 55;
			}
			sum = a[0] * 16 + a[1];
			TzmArray[len++] = sum;
		}
		else
			TzmArray[len++] = 256;
	}
	return TzmLength;
}

void SunDaySearch::GetNext(short* next, WORD* Tzm, WORD TzmLength) {
	//�����루�ֽڼ�����ÿ���ֽڵķ�Χ��0-255��0-FF��֮�䣬256������ʾ�ʺţ���260��Ϊ�˷�ֹԽ��
	for (int i = 0; i < 260; i++)
		next[i] = -1;
	for (int i = 0; i < TzmLength; i++)
		next[Tzm[i]] = i;
}

void SunDaySearch::SearchMemoryBlock(WORD* Tzm, WORD TzmLength, unsigned __int64 StartAddress, unsigned long size, std::vector<unsigned __int64>& ResultArray) {
	MemoryData = (BYTE*)StartAddress;
	for (int i = 0, j, k; i < size;)
	{
		j = i; k = 0;

		for (; k < TzmLength && j < size && (Tzm[k] == MemoryData[j] || Tzm[k] == 256); k++, j++);

		if (k == TzmLength)
		{
			ResultArray.push_back(StartAddress + i);
		}

		if ((i + TzmLength) >= size)
		{
			return;
		}

		int num = Next[MemoryData[i + TzmLength]];
		if (num == -1)
			i += (TzmLength - Next[256]);//������������ʺţ��ʹ��ʺŴ���ʼƥ�䣬���û�о�i+=-1
		else
			i += (TzmLength - num);
	}
}

int SunDaySearch::SearchMemory(std::string Tzm, unsigned __int64 StartAddress, unsigned __int64 SearchSize, std::vector<unsigned __int64>& ResultArray) {
	int i = 0;
	unsigned long BlockSize;
	MEMORY_BASIC_INFORMATION mbi{};
	auto EndAddress = StartAddress + SearchSize;

	DelStringBlank(Tzm);
	WORD TzmLength = Tzm.length() / 2;
	WORD* TzmArray = new WORD[TzmLength];

	GetTzmArray(Tzm.data(), TzmArray);
	GetNext(Next, TzmArray, TzmLength);

	//��ʼ���������
	ResultArray.clear();

	while (VirtualQuery((LPCVOID)StartAddress, &mbi, sizeof(mbi)) != 0)
	{
		//��ȡ�ɶ���д�Ϳɶ���д��ִ�е��ڴ��
		if (mbi.Protect == PAGE_EXECUTE_READ)
		{
			i = 0;
			BlockSize = mbi.RegionSize;
			//��������ڴ�
			while (BlockSize >= BLOCKMAXSIZE) {
				SearchMemoryBlock(TzmArray, TzmLength, StartAddress + (BLOCKMAXSIZE * i), BLOCKMAXSIZE, ResultArray);
				BlockSize -= BLOCKMAXSIZE; i++;
			}
			SearchMemoryBlock(TzmArray, TzmLength, StartAddress + (BLOCKMAXSIZE * i), BlockSize, ResultArray);
		}
		StartAddress += mbi.RegionSize;

		if (EndAddress != 0 && StartAddress > EndAddress)
		{
			return ResultArray.size();
		}
	}
	return ResultArray.size();
}