//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// File name :   Program4.c                                                             //
// Description : Program to which accept number from user & display its table.          //
// Author :      Pallavi Omprakash Malewar                                              //
// Date :        15/06/2025                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Initialization
        - Set COUNT = 1.

    Processing
        - Repeat the following steps while COUNT is less than or equal to 10:
            - Calculate RESULT = N * COUNT.
            - Print RESULT.
            - Increment COUNT by 1.

    Output
        - Display the multiplication table of the given number.

    END
*/


#include<stdio.h>

void Table(int iNo)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= 10 ; iCount++)
    {
        printf("%d\t",(iCount * iNo));
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}