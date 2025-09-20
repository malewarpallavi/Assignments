//////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program to which accept number from user & display its digits in reverse order.
// Author :      Pallavi Omprakash Malewar
// Date :        20/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

