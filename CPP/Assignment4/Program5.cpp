/////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Output :    a   b   c   d   e   f

*/


#include<iostream>
using namespace std;

void Display()
{
    int i = 0;
    char ch = 'a';

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