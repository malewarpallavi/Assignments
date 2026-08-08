////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.cpp
// Description : Write a program which accept matrix from user & display addition of elements from each column.
// Author :      Pallavi Omprakash Malewar
// Date :        27/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input  :    3   2   5   9
                4   3   2   2
                8   4   1   5   
                3   9   7   5

    Output :    18  18  15  25

*/


#include<iostream>
using namespace std;

void AddColumn(int Arr[][4], int iRow, int iCol)
{
    for(int i = 0 ; i < iRow ; i++)
    {
        int iSum = 0;
        for(int j = 0 ; j < iCol ; j++)
        {
            iSum += Arr[i][j];
        }
        cout << iSum << "\t";
    }
    cout << endl;
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

    AddColumn(Arr, 4, 4);

    return 0;
}