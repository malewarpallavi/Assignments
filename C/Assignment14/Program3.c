///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Program which accept number of rows & columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        31/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     iRow = 5      iCol = 5

Output :    a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e

*/


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 , iCnt = 1 ;
    char ch = '\0';

    for(i = 1 ; i <= iRow ; i++)
    {
        if((i % 2) != 0)
        {
            ch = 'a';
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%c\t" , ch);
                ch++;   
            }
        }
        else
        {
            iCnt = 1;
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%d\t" , iCnt);
                iCnt++;
            }
        }        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows & Columns :");
    scanf("%d %d" , &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}