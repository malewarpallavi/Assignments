/////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Program to Check if Number is Even or Odd
// Author :      Pallavi Omprakash Malewar
// Date :        19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Read an integer value from the user.

    Processing
        - Calculate the remainder when the number is divided by 2.
        - If remainder equals 0:
            - Set result as even.
        - Else:
            - Set result as odd.

    Output
        - Display whether the number is even or odd based on the result.

    END

*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOl;

BOOl CheckEven(int iNo)
{
    BOOl bResult = FALSE;

    if(iNo % 2 == 0)
    {
        bResult = TRUE;
    }
    else
    {
        bResult = FALSE;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    BOOl bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even Number.\n",iValue);
    }
    else
    {
        printf("%d is Odd Number.\n",iValue);
    }

    return 0;
}