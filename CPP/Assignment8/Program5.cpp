////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write a program which accept matrix from user & swap the contents of consecutive rows.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    3   2   5   9
                4   3   2   2
                8   4   1   5   
                3   9   7   5

    Output :    4   3   2   2   
                3   2   5   9
                3   9   7   5   
                8   4   1   5

*/


#include<iostream>
using namespace std;

void SwapRows(int Arr[][4], int iRow, int iCol)
{
    for(int i = 0 ; i < iRow -1 ; i+=2)
    {
        for(int j = 0 ; j < iCol ; j++)
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp;           
        }
    }
}

int main()
{
    int Arr[4][4]; 
    int iNo = 0;

    cout << "Enter the elements :\n";

    for(int i = 0 ; i < 4 ; i++)
    {
        cout << "Enter Row " << (i+1) << " : ";
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> Arr[i][j];
        }
    }

    SwapRows(Arr, 4, 4);

    return 0;
}