///////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program to which accept number from user & display its table in reverse order.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Initialization
        - Set COUNT = 10.

    Processing
        - Repeat the following steps while COUNT is greater than or equal to 1:
            - Calculate RESULT = N * COUNT.
            - Print RESULT.
            - Decrement COUNT by 1.

    Output
        - Display the multiplication table of the given number in reverse order.

    END
*/


#include<stdio.h>

void TableRev(int iNo)
{
    int iCount = 0;

    for(iCount = 10 ; iCount >= 1 ; iCount--)
    {
        printf("%d\t",(iCount * iNo));
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}