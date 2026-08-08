/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write generic program which accept N values & search last occurence of any specific.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :     10  20  30  10  30  40  10  40  10
    Value to check frequency : 40

    Output :    8

*/


#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr, int iSize, T iNo)
{
    int i = 0, iCount = iSize;
    for(i = iSize - 1 ; i >= 0 ; i--)
    {
        if(*(arr + i) == iNo) return iCount;
        iCount--;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(arr, 9, 40);
    printf("%d\n", iRet);

    return 0;
}