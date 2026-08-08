///////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.cpp
// Description : Write generic program to find largest number from three numbers.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
///////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2, T no3)
{
    if(no1 >= no2 && no1 >= no3) return no1;
    else if(no2 >= no3 && no2 >= no1) return no2;
    else return no3;
}

int main()
{
    int iRet = Max(10, 20, 15);
    printf("%d\n", iRet);
    
    float fRet = Max(10.0f, 20.0f, 15.0f);
    printf("%f\n", fRet);

    return 0;
}