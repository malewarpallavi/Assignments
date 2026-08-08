////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write recursive program which accept string from user & return its reverse number.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    523
    Output :    325

*/

#include<iostream>
using namespace std;

void Reverse(char *crr)
{
    if (*crr == '\0')
        return;

    Reverse(crr + 1);

    cout << *crr;
}

int main()
{
    int iRet = 0;
    char crr[20];

    cout << "Enter String : ";
    cin.getline(crr, 20);

    Reverse(crr);
    cout<<endl;

    return 0;
}