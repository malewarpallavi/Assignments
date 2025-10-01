//////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                          //
// File name :   Program4.c                                                                 //
// Description : Program to which accept number from user & count frequency of 4 in it.     //
// Author :      Pallavi Omprakash Malewar                                                  //
// Date :        20/06/2025                                                                 //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 0

Input : 1018
Output : 0

Input : 9440
Output : 2

Input : 922432
Output : 1
*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0 , iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("4 came %d times.\n",iRet);

    return 0;
}