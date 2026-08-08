/////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Input  :    5 
    Output :    5	4	3	2	1

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;
    for(i = iNo ; i >= 1 ; i--)
    {
        cout << i << "\t";
    }
    cout<<endl;
}

int main()
{
    int iNo = 0;
    cout << "Enter Length : ";
    cin >> iNo;
    Display(iNo);
    return 0;
}