/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.cpp
// Description : Write generic program which accept N values & count frequency of any specific.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :     10  20  30  10  30  40  10  40  10
    Value to check frequency : 10

    Output :    4

*/


#include<iostream>
using namespace std;

template<class T>

int Frequency(T *arr, int iSize, T iNo)
{
    int i = 0, iCount = 0;
    for(i = 0 ; i < iSize; i++)
    {
        if(*(arr + i) == iNo) iCount++;
    }
    return iCount;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);
    printf("%d\n", iRet);

    return 0;
}