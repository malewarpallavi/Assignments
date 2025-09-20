//////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Program to display Summation of all non-factors of given number
// Author :      Pallavi Omprakash Malewar
// Date :        20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Take Input from User

        - Read and store the input value.

    Validation
        - If the input is negative, display invalid input.

    Initialization
        - Initialize a variable iSum to 0. This will store the summation of non-factors.

        - Initialize a counter variable iCnt to 1.

    Processing
        - Loop while iCnt is less than or equal to iNo:

        - In each iteration:

            - Check whether iCnt is not a factor of iNo by evaluating.

                - If true then, iCnt is a non-factor:

                - Add iCnt to iSum.

                - Increment iCnt by 1.

    Output
        - Display the final summation value stored in iSum.

    END

*/


#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0 , iSum = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = NonFact(iValue);

    printf("Summation of factors of %d is %d" , iValue ,iRet);

    return 0;
}