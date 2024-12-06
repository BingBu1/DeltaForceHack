#pragma once
#include <codecvt>
#include <comdef.h>
#include <string>

namespace ErrorMsgBuilder
{
    static std::string HrToString(HRESULT hr)
    {
        _com_error err(hr);
#ifdef UNICODE
        std::wstring                                     wstr(err.ErrorMessage());
        std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
        return converter.to_bytes(wstr);
#else
        return std::string(err.ErrorMessage());
#endif
    }

    static std::string FormatErrorMessageImpl(const std::string& filePath, unsigned int lineNum, const std::string& msg)
    {
        auto fileName = filePath.substr(filePath.find_last_of("\\/") + 1);
        return "[" + fileName + ":" + std::to_string(lineNum) + "] " + msg;
    }

    static std::string FormatHRMessageImpl(const std::string& filePath, unsigned int lineNum, HRESULT hr)
    {
        return FormatErrorMessageImpl(filePath, lineNum, HrToString(hr));
    }
}

#ifndef FormatHRMessage
#define FormatHRMessage(x) ErrorMsgBuilder::FormatHRMessageImpl(__FILE__, __LINE__, x)
#endif

#ifndef FormatErrorMessage
#define FormatErrorMessage(x) ErrorMsgBuilder::FormatErrorMessageImpl(__FILE__, __LINE__, x)
#endif
