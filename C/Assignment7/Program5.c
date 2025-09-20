////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program to find difference between Even & Odd factorial of given number.
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
        - Set EVEN_FACTORIAL = 1.
        - Set ODD_FACTORIAL = 1.
        - Set COUNT = 2.

    Processing

        - Calculate Even Factorial:
            - Repeat while COUNT <= N:
                - EVEN_FACTORIAL = EVEN_FACTORIAL * COUNT.
                - Increment COUNT by 2.

        - Calculate Odd Factorial:
            - Set COUNT = 3.
            - Repeat while COUNT <= N:
                - ODD_FACTORIAL = ODD_FACTORIAL * COUNT.
                - Increment COUNT by 2.

        - Calculate DIFFERENCE = EVEN_FACTORIAL - ODD_FACTORIAL.

        - If DIFFERENCE is negative:
            - Convert it to positive.

    Output
        - Display the absolute difference between Even and Odd factorial.

    END
*/


#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount = 0 , iAns = 0 , iAns1 = 1 , iAns2 = 1 ;

    for(iCount = 2 ; iCount <= iNo ; iCount+=2)
    {
        iAns1 = iAns1 * iCount;
    }

    for(iCount = 3 ; iCount <= iNo ; iCount+=2)
    {
        iAns2 = iAns2 * iCount;
    }

    iAns = iAns1 - iAns2;

    if(iAns < 0)
    {
        iAns = -iAns;
    }

    return iAns;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Differnce between Even & Odd Factorial of %d is %d",iValue,iRet);

    return 0;
}