/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program to which accept number from user & count frequency in such a digits which are less than 6.
// Author :      Pallavi Omprakash Malewar
// Date :        20/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 3

Input : 1018
Output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1
*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0 , iCnt = 0 ;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}