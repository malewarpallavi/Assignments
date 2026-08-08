/////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Input  :    879
    Output :    24

*/


#include<iostream>
using namespace std;

int Sum(int iNo)
{
    if(iNo < 10) return iNo;
    return ((iNo % 10) + Sum(iNo / 10));
}

int main()
{
    int iNo = 0, iRet = 0;

    cout << "Enter Length : ";
    cin >> iNo;

    iRet = Sum(iNo);
    cout << iRet << endl;

    return 0;
}