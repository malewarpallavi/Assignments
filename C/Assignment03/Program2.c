///////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.c
// Description : Program to accept one number and print even factors of that number.
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
            - If the factor is even (i.e., current value % 2 == 0), print it.

    Output
        - Display all even factors of the input number.

    END

*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(i = 1 ; i <= (iNo/2) ; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d\t",i);
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