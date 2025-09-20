//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program which accept number from user & return the count of digits in between 3 & 7.
// Author :      Pallavi Omprakash Malewar
// Date :        20/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0
*/

#include<stdio.h>

int CountRange(int iNo) //ino defines first number
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)

    {
        iDigit = iNo % 10;

        if((iDigit >= 3) && (iDigit <= 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Total Digits between 3 & 7 : %d\n",iRet);

    return 0;
}