////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write recursive program which accept string from user & count number of small characters.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    HElloWOrlD
    Output :    5

*/


#include<iostream>
using namespace std;

int Small(char *crr)
{
    if(*crr == '\0') return 0;

    if(*crr >= 'a' && *crr <= 'z')
    {
        return 1 + Small(crr + 1);
    }
    return Small(crr + 1);
}

int main()
{
    int iRet = 0;
    char crr[20];

    cout << "Enter String : ";
    cin.getline(crr, 20);

    iRet = Small(crr);
    cout << iRet << endl;

    return 0;
}