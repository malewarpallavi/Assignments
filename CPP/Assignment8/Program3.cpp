////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write a program which accept matrix from user & return largest number from both the diagonals.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    3   2   5   9
                4   3   2   2
                8   4   1   5   
                3   9   7   5

    Output :    9

*/


#include<iostream>
using namespace std;

int MaxDiagonal(int Arr[][4], int iRow, int iCol)
{
    int iMax = 0;

    for(int i = 0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j < iCol ; j++)
        {
            if((iMax < Arr[i][j]) && ((i == j) || ((i + j) == iRow)))
            {
                iMax = Arr[i][j];
            }
        }
    }
    return iMax;
}

int main()
{
    int Arr[4][4]; 
    int iRet = 0, iNo = 0;

    cout << "Enter the elements :\n";

    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> Arr[i][j];
        }
        cout << endl;
    }

    iRet = MaxDiagonal(Arr, 4, 4);
    cout << "Largest number from both diagonals : " << iRet << endl;

    return 0;
}