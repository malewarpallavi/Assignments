///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Program which accept number of rows & number of columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        10/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
Input :     iRow = 3      iCol = 4

Output :    *   #   *   #
            *   #   *   #
            *   #   *   #
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= (iCol/2) ; j++)
        {
            printf("*\t#\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows & Columns : ");
    scanf("%d %d" ,&iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;

}