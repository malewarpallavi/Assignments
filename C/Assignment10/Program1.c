//////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                              //
// File name :   Program1.c                                                                     //
// Description : Program which accept number from user & return the count of Even Digits.       //
// Author :      Pallavi Omprakash Malewar                                                      //
// Date :        20/06/2025                                                                     //
//                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                              //
// Description   : Function accepts integer and returns count of even digits present in it.     //
// Function Name : CountEven                                                                    //
// Input         : int iNo                                                                      //
// Output        : int (Count of even digits)                                                   //
// Author        : Pallavi Omprakash Malewar                                                    //
// Date          : 20/06/2025                                                                   //
//                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0 , iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Count of present Even Digits : %d\n",iRet);

    return 0;
}