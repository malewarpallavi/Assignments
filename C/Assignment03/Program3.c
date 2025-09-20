///////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to accept one number and print odd factors of that number.
// Author :      Pallavi Omprakash Malewar
// Date :        19/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Read an integer value from the user.

    Validation
        - If the input is negative, convert it to its absolute value.

    Processing
        - Loop from 1 to (input / 2), inclusive:
            - In each iteration:
            - If the current value divides the input exactly (i.e., input % current value == 0), it is a factor.
            - If the factor is odd (i.e., current value % 2 != 0), print it.

    Output
        - Display all odd factors of the input number.

    END

*/


#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) != 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}