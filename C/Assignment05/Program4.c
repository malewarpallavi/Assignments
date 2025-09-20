/////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Program which accept N from user & print all odd numbers upto N.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Validation
        - If N is less than or equal to 0:
            - Show a message: "Invalid Input."
            - Stop the program.

    Initialization
        - Start a counter called COUNT from 1.

    Processing
        - Repeat the following steps while COUNT is less than or equal to N:
            - Print the value of COUNT.
            - Add 2 to COUNT (to move to next odd number).

    Output
        - Display all odd numbers from 1 up to N.

    END
*/


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNo ; iCount+=2)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}