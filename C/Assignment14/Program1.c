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

Output :    1   2   3   4             
            5   6   7   8    
            9   1   2   3       
            4   5   6   7     
*/


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ,iCnt = 1 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(iCnt <= 9)
            {
                printf("%d\t" , iCnt);
                iCnt++;
            }
            else
            {
                iCnt = 1;

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

    printf("Enter Number of Rows & Columns : ");
    scanf("%d %d" ,&iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;

}