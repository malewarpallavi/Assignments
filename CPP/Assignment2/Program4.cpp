////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.cpp
// Description : Write generic program to accept N values from user & return largest values.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>

T Max(T *arr, int iSize)
{
    T Max = *arr;
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(Max < *(arr + i)) 
        {
            Max = *(arr + i);
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.4, 3.7, 9.8, 8.7};

    int iMax = Max(arr, 5);
    printf("%d\n", iMax);

    float fMax = Max(brr, 4);
    printf("%f\n", fMax);

    return 0;
}