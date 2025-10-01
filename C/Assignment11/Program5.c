//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
// File name :   Program5.c                                                         //
// Description : Program which accept number from user & display below pattern      //
// Author :      Pallavi Omprakash Malewar                                          //
// Date :        10/07/2025                                                         //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/*
Input : 8
Output : 2   4   6   8   10   12   14   16
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("%d\t" , (iCount * 2));
    }
}
    
int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d" , &iValue);

    Pattern(iValue);

    return 0;
}
