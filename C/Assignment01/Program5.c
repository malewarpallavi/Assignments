/////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program to Display * number of times user want
// Author :      Pallavi Omprakash Malewar
// Date :        18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    START

    Initialization  
        - Assign a hardcoded value '5' to the variable 'iValue'.

    Looping Logic 
        - Use a 'for' loop from 'iCnt = 1' to 'iNo'.
        - On each iteration:
            - Print '*'.

    END
*/

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}