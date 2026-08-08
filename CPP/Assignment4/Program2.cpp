/////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.cpp
// Description : Write recursive program which display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////

/*

    Output :    1   2   3   4   5

*/


#include<iostream>
using namespace std;

void Display()
{
    int i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        cout << i+1 << "\t";
    }
    cout<<endl;
}

int main()
{
    Display();
    return 0;
}