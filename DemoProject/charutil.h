#pragma once
#include <string>

class CharUtil
{
private:
    CharUtil(void);


public:
    ~CharUtil(void);

    //conversion of chars
    static std::wstring s2ws(const std::string& str);
    static std::string ws2s(const std::wstring& wstr);
};

