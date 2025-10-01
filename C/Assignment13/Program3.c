//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
// File name :   Program2.c                                                         //
// Description : Program which accept number of rows & columns from user and        //
//               display below pattern                                              //
// Author :      Pallavi Omprakash Malewar                                          //
// Date :        11/07/2025                                                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/*
Input :     iRow = 3      iCol = 5

Output :    A   A   A   A   A
            B   B   B   B   B
            C   C   C   C   C
*/


#include<stdio.h>
 
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            printf("%c\t" , 'A' + i);
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