///////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program to display multiplication of factors of given number
// Author :      Pallavi Omprakash Malewar
// Date :        20/05/2025
//
///////////////////////////////////////////////////////////////////////////////

/*
    START

    Input  
        - Read an integer value from the user.

    Validation
        - If the input is negative, convert it to its absolute value.

    Initialization
        - Set a multiplication variable 'iMul' to 1.

    Processing
        - Loop from 1 to (input / 2), inclusive:
            - For each iteration:
            - If input is divisible by the current number (i.e., input % i == 0), it's a factor.
            - Multiply the factor with 'iMul'.

    Output
        - Display the multiplication result of all factors.

    END

*/


#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0 , iMul = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue= 0 ,
        iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);
    
    iRet = MulFact(iValue);

    printf("Multiplication of factors of given Numbers : %d",iRet);

    return 0;
}