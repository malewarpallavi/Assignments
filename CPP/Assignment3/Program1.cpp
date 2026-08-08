////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.cpp
// Description : Write generic program which accept one value & one number from user. Print that value that number of times on screen.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :     M   7
    Output :    M   M   M   M   M   M   M

    Input :     11   3
    Output :    11  11  11    

*/



#include<iostream>
using namespace std;

template<class T>

void Display(T value, int iSize)
{
    int i = 0;
    for(i = 0 ; i < iSize; i++)
    {
        cout << value << "\t";
    }
    cout << endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}