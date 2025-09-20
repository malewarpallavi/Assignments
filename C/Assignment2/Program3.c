////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to Display one number another number of times
// Author :      Pallavi Omprakash Malewar
// Date :        18/05/2025
//
////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Read two integer values from the user:  
            - First value: the number to be displayed.
            - Second value: the frequency (number of times to display).

    Validation
        - If frequency is negative, convert it to its absolute value.

    Processing
        - Loop from 1 to frequency (inclusive):
            - Print the first input value.

    Output
        - The first number is printed the specified number of times.

    END

*/


#include<stdio.h>

void Display(int iNo, int iFreq)
{
    int iCnt = 0;

    if(iFreq < 0)
    {
        iFreq = -iFreq;
    }

    for(iCnt = 1 ; iCnt <= iFreq ; iCnt ++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0 , iCount = 0;

    printf("Enter First Value : ");
    scanf("%d",&iValue);

    printf("Enter Second Value : ",iCount);
    scanf("%d",&iCount);

    Display(iValue , iCount);

    return 0;
}