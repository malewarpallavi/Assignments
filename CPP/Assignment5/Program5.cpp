/////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Input  :    6
    Output :    a	b	c	d	e	f	

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;
    char ch = 'a';
    for(i = 0 ; i < iNo ; i++)
    {
        cout << ch << "\t";
        ch++;
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