////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.cpp
// Description : Write a program which accept matrix from user & check whether the matrix is Sparse matrix or not.
// Author :      Pallavi Omprakash Malewar
// Date :        01/08/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Sparse Matrix is a matrix with the majority of its elements equal to zero.

*/

/*

    Input  :    1   0   3   0
                0   6   0   0
                0   0   1   0
                9   0   0   9

    Output :    TRUE
*/


#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckSparse(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;
    int ZeroCnt = 0, NonZeroCnt = 0;

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            if(Arr[i][j] == 0) ZeroCnt++;
            else NonZeroCnt++;
        }
    }
    if(ZeroCnt > NonZeroCnt) return TRUE;
    else return FALSE;
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

    bRet = CheckSparse(Arr, 4, 4);
    
    if(bRet == TRUE) cout << "TRUE" << endl;
    else cout << "FALSE" << endl;

    return 0;
}