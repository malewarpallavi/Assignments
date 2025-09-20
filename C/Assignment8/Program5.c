/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program which accept area in square feet & convert it into square meter.(1 Square feet = 0.0929 Square meter)
// Author :      Pallavi Omprakash Malewar
// Date :        16/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter area in square feet.
        - Read and store the input value as 'iValue'.

    Validation
        - If iValue is less than 0:
            - Display "Invalid Input".
            - Terminate the process.

    Processing
        - Convert area from square feet to square meter using formula:
            - SqMeter = 0.0929 * iValue.

    Output
        - Display the converted area in square meter up to 4 decimal places.

    END
*/


#include<stdio.h>

double SquareMeter(int iValue)
{
    double SqMeter = 0.0;

    SqMeter = (0.0929 * (double)iValue);

    return SqMeter;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : ");

    scanf("%d",&iValue);

    if(iValue < 0)
    {
        printf("Invalid Input\n");
    }
    else
    {
        dRet = SquareMeter(iValue);
    
        printf("%d Square feet = %.4lf Square meter\n",iValue,dRet);
    }

    return 0;
}