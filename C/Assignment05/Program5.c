//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// File name :   Program5.c                                                     //
// Description : Program which accept N & print first 5 multiples of of N.      //  
// Author :      Pallavi Omprakash Malewar                                      //
// Date :        15/06/2025                                                     //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

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
        - We want to print 5 multiples, so set TOTAL_MULTIPLES = 5.

    Processing
        - Repeat the following steps until COUNT reaches 5:
            - Multiply N with COUNT to get the multiple.
            - Show the result.
            - Add 1 to COUNT.

    Output
        - Show the first 5 multiples of the number.

    END
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Function: MultipleDisplay                                                    //
// Description: Prints first 5 multiples of the given number                    //
// Input: iNo (integer)                                                         //
// Output: First 5 multiples of iNo printed on screen                           //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= 5; iCount++)
    {
        printf("%d\t",iCount * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}