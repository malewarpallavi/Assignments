/////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Output :    A   B   C   D   E   F

*/


#include<iostream>
using namespace std;

void Display()
{
    int i = 0;
    char ch = 'A';

    for(i = 0 ; i < 6 ; i++)
    {
        cout << ch << "\t";
        ch++;
    }
    cout<<endl;
}

int main()
{
    Display();
    return 0;
}