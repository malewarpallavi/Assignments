/////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Input  :    5 
    Output :    1	2	3	4	5	

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;
    for(i = 0 ; i < iNo ; i++)
    {
        cout << i+1 << "\t";
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