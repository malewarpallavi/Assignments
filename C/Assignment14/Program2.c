///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Program which accept number of rows & columns from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        11/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*
Input :     iRow = 5      iCol = 5

Output :    2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
*/


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ,iCnt = 1 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        if((i % 2) != 0)
        {
            iCnt = 2;
        }
        else
        {
            iCnt = 1;
        }

        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t" , iCnt);
            iCnt += 2;
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows & Columns :\n");
    scanf("%d %d" ,&iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;

}