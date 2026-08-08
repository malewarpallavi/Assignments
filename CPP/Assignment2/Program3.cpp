///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.cpp
// Description : Write generic program to accept N values from user & return addition of that values.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>

T AddN(T *arr, int iSize)
{
    T sum = T();
    int i = 0;

    if(iSize == 0) return 0;

    for(i = 0 ; i < iSize ; i++)
    {
        sum = sum + *(arr + i);
    }
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSum = AddN(arr, 5);
    printf("%d\n", iSum);

    float fSum = AddN(brr, 4);
    printf("%f\n", fSum);

    return 0;
}