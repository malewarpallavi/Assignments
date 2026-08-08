//////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write generic program which accept N values & reverse the contents.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :     10  20  30  10  30  40  10  40  10

    Output :    10  40  10  40  30  10  30  20  10

*/


#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
    int i = 0;
    T temp = T();
    for(i = 0 ; i < iSize/2 ; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + iSize -1 -i);
        *(arr + iSize -1 -i) = temp;
    }
    for(i = 0 ; i < iSize ; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    Reverse(arr, 9);

    return 0;
}