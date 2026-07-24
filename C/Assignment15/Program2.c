///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Program which accept number of rows & columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        06/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     iRow = 4      iCol = 4

Output :    *   *   *   *
            *   *   *   #
            *   *   #   #
            *   #   #   #

*/



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j < iCol ; j++)
        {
            if((i + j) < iRow) printf("*\t");
            else printf("#\t");
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