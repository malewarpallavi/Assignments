////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.cpp
// Description : Write a program which accept matrix from user & return addition of diagonal elements.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    3   2   5   9
                4   3   2   2
                8   4   1   5   
                3   9   7   5

    Output :    12

*/


#include<iostream>
using namespace std;

int AddDiagonal(int Arr[][4], int iRow, int iCol)
{
    int iSum = 0;

    for(int i = 0 ; i < iRow ; i++)
    {
        iSum += Arr[i][i];
    }
    return iSum;
}

int main()
{
    int Arr[4][4]; 
    int iRet = 0;

    cout << "Enter the elements :\n ";

    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> Arr[i][j];
        }
        cout << endl;
    }
    iRet = AddDiagonal(Arr, 4, 4);
    cout << "Addition of Diagonal : " << iRet << endl;

    return 0;
}