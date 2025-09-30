//////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                              //
// File name :   Program1.c                                                                     //
// Description : Program which accept number from user & print $ & * that number of times       //
// Author :      Pallavi Omprakash Malewar                                                      //
// Date :        15/06/2025                                                                     //
//                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////


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
        - Repeat the following steps until COUNT reaches N:
            - Print "$  *"
            - Add 1 to COUNT.

    Output
        - Display "$  *" on each line for N times.

    END
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("$  *\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


