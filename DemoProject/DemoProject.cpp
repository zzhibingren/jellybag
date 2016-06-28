// DemoProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

    vector<wstring> listParam;
    int nIndex = 0;
    if (argc > 0)
    {
        while (nIndex < argc)
        {
            std::wstring param(argv[nIndex]);
            listParam.push_back(param);
            nIndex++;
        }
        sort(listParam.begin(), listParam.end());
    }
    std::for_each(listParam.begin(), listParam.end(), 
        [&](wstring& param) 
        {
            wprintf( L"%s %d \n", param.c_str(), param.size());
            wcout << param << endl; 
        }
    );
	return 0;
}

