/////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program to Display * number of times user want
// Author :      Pallavi Omprakash Malewar
// Date :        18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    START

    Input 
        - Read an integer value from the user.

    Validation
        - If the input is negative, convert it to its absolute value.

    Processing
        - Initialize a counter to 1.
        - While the counter is less than or equal to the input value:
            - Print the output.
            - Increment the counter by 1.

    Output
        - The output is displayed the specified number of times.

    END

*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}