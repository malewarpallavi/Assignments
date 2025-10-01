//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
// File name :   Program1.c                                                         //
// Description : Program which accept number of rows & columns from user and        //
//               display below pattern                                              //
// Author :      Pallavi Omprakash Malewar                                          //
// Date :        10/07/2025                                                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/*
Input :     iRow = 4      iCol = 3

Output :        *   *   *
                *   *   *
                *   *   *
                *   *   *
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            printf("*\t");
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