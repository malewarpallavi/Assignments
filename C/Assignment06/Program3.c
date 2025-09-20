//////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to find factorial of a number.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
/////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Initialization
        - Set FACT = 1.
        - Set COUNT = N.

    Processing
        - Repeat the following steps while COUNT is greater than or equal to 1:
            - Multiply FACT by COUNT.
            - Decrease COUNT by 1.

    Output
        - Display the factorial value (FACT).

    END
*/


#include<stdio.h>

int Factorial(int iNo)
{
    int iCount = 0 , iFact = 1;

    for(iCount = iNo ; iCount >= 1 ; iCount--)
    {
        iFact = iFact * iCount;
    }
    return iFact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d : %d \n",iValue,iRet);

    return 0;
}