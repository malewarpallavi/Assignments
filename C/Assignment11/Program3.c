//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
// File name :   Program3.c                                                         //
// Description : Program which accept number from user & display below pattern      //
// Author :      Pallavi Omprakash Malewar                                          //
// Date :        10/07/2025                                                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/*
Input : 5
Output : 1  *   2   *   3   *   4    *   5   *
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("%d\t*\t" , iCount);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d" , &iValue);

    Pattern(iValue);

    return 0;
}
