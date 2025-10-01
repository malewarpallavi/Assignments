//////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                          //
// File name :   Program2.c                                                                 //
// Description : Program which accept number from user & return the count of Odd Digits.    //
// Author :      Pallavi Omprakash Malewar                                                  //
// Date :        20/06/2025                                                                 //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                              //
// Description   : Function accepts integer and returns count of odd digits present in it.      //
// Function Name : CountOdd                                                                     //
// Input         : int iNo                                                                      //
// Output        : int (Count of odd digits)                                                    //
// Author        : Pallavi Omprakash Malewar                                                    //
// Date          : 20/06/2025                                                                   //
//                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0 , iCnt = 0 ;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
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

    iRet = CountOdd(iValue);

    printf("Count of odd digits : %d\n",iRet);

    return 0;
}