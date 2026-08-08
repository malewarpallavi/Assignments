//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write recursive program which accept number from user & return its product of digit.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    523
    Output :    30

*/


#include<iostream>
using namespace std;

int Mult(int iNo)
{
    if(iNo < 10) return iNo;
    return (iNo % 10) * Mult(iNo / 10);
}

int main()
{
    int iRet = 0, iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    iRet = Mult(iValue);
    cout << iRet << endl;

    return 0;
}