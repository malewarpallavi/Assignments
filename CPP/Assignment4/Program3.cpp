/////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Output :    5   4   3   2   1

*/


#include<iostream>
using namespace std;

void Display()
{
    int i = 0;
    for(i = 5 ; i >= 1 ; i--)
    {
        cout << i << "\t";
    }
    cout<<endl;
}

int main()
{
    Display();
    return 0;
}