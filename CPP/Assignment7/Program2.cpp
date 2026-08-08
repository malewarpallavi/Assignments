//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.cpp
// Description : Write recursive program which accept string from user & return largest digit.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    87983
    Output :    9

*/


#include<iostream>
using namespace std;

int Max(char *crr)
{
    if(*crr == '\0') return 0;

    int max = Max(crr + 1);

    int current = *crr - '0';

    if(current > max) return current;
    else return max;
}

int main()
{
    int iRet = 0;
    char crr[20];

    cout << "Enter String : ";
    cin.getline(crr, 20);

    iRet = Max(crr);
    cout << iRet << endl;

    return 0;
}