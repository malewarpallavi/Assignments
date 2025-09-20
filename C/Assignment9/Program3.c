/////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to which accept number from user & count frequency of 2 in it.
// Author :      Pallavi Omprakash Malewar
// Date :        20/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 9000
Output : 0

Input : 922432
Output : 3
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0 , iCnt = 0 ;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("2 came %d times.",iRet);

    return 0;
}