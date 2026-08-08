//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write recursive program which accept string from user & count number of characters.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    Hello
    Output :    5

*/


#include<iostream>
using namespace std;

int StrLen(char *crr)
{
    if(*crr == '\0') return 0;
    return 1 + StrLen(crr + 1);
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter String : ";
    cin >> arr;

    iRet = StrLen(arr);
    cout << iRet << endl;

    return 0;
}