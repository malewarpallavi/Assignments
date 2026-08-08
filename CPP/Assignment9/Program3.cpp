////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.cpp
// Description : Write a program which accept matrix from user & reverse the contents of each column.
// Author :      Pallavi Omprakash Malewar
// Date :        01/08/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    3   2   5   9
                4   3   2   2
                8   4   1   5   
                3   9   7   5

    Output :    3   9   7   5
                8   4   1   9
                4   3   2   2
                3   2   5   9
*/


#include<iostream>
using namespace std;

void ReverseCol(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i < iRow/2 ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[iRow - i - 1][j];
            Arr[iRow - i - 1][j] = temp;
        }
    }

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
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

    ReverseCol(Arr, 4, 4);

    return 0;
}