///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program which accept number of rows & number of columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        11/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
Input :     iRow = 4      iCol = 4

Output :    A   B   C   D
            A   B   C   D
            A   B   C   D
            A   B   C   D
*/


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            printf("%c\t" , 'A' + j);
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