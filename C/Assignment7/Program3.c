////////////////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to find Even factorial of given number.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
///////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Validation
        - If N is negative:
            - Convert N to positive (N = -N).

    Initialization
        - Set COUNT = 2.
        - Set ANS = 1.

    Processing
        - Repeat the following steps while COUNT is less than or equal to N:
            - Multiply ANS = ANS * COUNT.
            - Increment COUNT by 2.

    Output
        - Display the even factorial value (ANS).

    END
*/


#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount = 0 , iAns = 1;

    for(iCount = 2 ; iCount <= iNo ; iCount+=2)
    {
        iAns = iAns * iCount;
    }
    return iAns;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of %d is %d",iValue,iRet);

    return 0;
}