////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.cpp
// Description : Write generic program to accept N values from user & return smallest values.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>

T Min(T *arr, int iSize)
{
    T iMin = *arr;
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(iMin > *(arr + i)) 
        {
            iMin = *(arr + i);
        }
    }
    return iMin;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.3, 3.7, 9.8, 8.7};

    int iMin = Min(arr, 5);
    printf("%d\n", iMin);

    float fMin = Min(brr, 4);
    printf("%f\n", fMin);

    return 0;
}