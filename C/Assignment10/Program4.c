//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Program which accept number from user & return the multiplication of all digits.
// Author :      Pallavi Omprakash Malewar
// Date :        20/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of Digits of given numbers : %d",iRet);

    return 0;
}