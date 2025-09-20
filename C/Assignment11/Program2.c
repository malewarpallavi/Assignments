////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.c
// Description : Program which accept number from user & display below pattern
// Author :      Pallavi Omprakash Malewar
// Date :        10/07/2025
//
////////////////////////////////////////////////////////////////////////////////


/*
Input : 5
Output : 5  #   4   #   3   #   2   #   1   #
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = iNo ; iCount >= 1 ; iCount--)
    {
        printf("%d\t#\t" , iCount);
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
