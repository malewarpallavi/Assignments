///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Program which accept number of rows & columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        06/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     iRow = 5      iCol = 5

Output :    1   2   3   4   5
            1   2           5
            1       3       5
            1           4   5
            1   2   3   4   5
*/



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j < iCol ; j++)
        {
            if(i == 0 || i == iRow-1 || j == 0 || j == iCol-1 || i == j) printf("%d\t", j+1);
            else printf(" \t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & columns  :");
    scanf("%d %d" , &iValue1 , &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}