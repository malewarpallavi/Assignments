//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
// File name :   Program4.c                                                         //
// Description : Program which accept number from user & display below pattern      //
// Author :      Pallavi Omprakash Malewar                                          //
// Date :        10/07/2025                                                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/*
Input : 4
Output : #  1   *   #   2   *   #   3   *   #   4   *
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("#\t%d\t*\t" , iCount);
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
