////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write a program which accept matrix from user & check whether the matrix is identity matrix or not.
// Author :      Pallavi Omprakash Malewar
// Date :        01/08/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    Identity Matrix is square matrix with 1's along the diagonal from the upper left
    to lower right and 0's in all other positions.
    It is satisfies the structure as explained before then the ,atrix is called as
    Identity Matrix.
*/


/*

    Input  :    1   0   0   0
                0   1   0   0
                0   0   1   0
                0   0   0   1

    Output :    TRUE
*/


#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ReverseCol(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = i ; j < iCol ; j++)
        {
            if(i == j && Arr[i][j] != 1) return FALSE;
            else if(i != j && Arr[i][j] != 0) return FALSE;
        }
    }
    return TRUE;
}

int main()
{
    int Arr[4][4]; 
    int iNo = 0;
    BOOL bRet = FALSE;

    cout << "Enter the elements :\n";

    for(int i = 0 ; i < 4 ; i++)
    {
        cout << "Enter Row " << (i+1) << " : ";
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> Arr[i][j];
        }
    }

    bRet = ReverseCol(Arr, 4, 4);
    
    if(bRet == TRUE) cout << "TRUE" << endl;
    else cout << "FALSE" << endl;

    return 0;
}