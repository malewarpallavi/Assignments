////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write recursive program which accept string from user & return smallest digit.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    87983
    Output :    3

*/


#include<iostream>
using namespace std;

int Min(char *crr)
{
    if(*crr == '\0') return 9;

    int min = Min(crr + 1);

    int current = *crr - '0';

    if(current < min) return current;
    else return min;
}

int main()
{
    int iRet = 0;
    char crr[20];

    cout << "Enter String : ";
    cin.getline(crr, 20);

    iRet = Min(crr);
    cout << iRet << endl;

    return 0;
}