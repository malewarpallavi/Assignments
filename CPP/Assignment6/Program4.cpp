//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write recursive program which accept number from user & return its factorial.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    5
    Output :    120

*/


#include<iostream>
using namespace std;

int Fact(int iNo)
{
    if(iNo == 0 || iNo == 1) return 1;
    return iNo * Fact(iNo - 1);
}

int main()
{
    int iRet = 0, iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    iRet = Fact(iValue);
    cout << iRet << endl;

    return 0;
}