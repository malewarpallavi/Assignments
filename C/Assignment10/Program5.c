//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                          //
// File name :   Program5.c                                                                                                 //
// Description : Program which accept number from user & return the differenc between Summation of even & odd digits        //  
// Author :      Pallavi Omprakash Malewar                                                                                  //
// Date :        20/06/2025                                                                                                 //
//                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : -15

Input : 1018
Output : 6

Input : 8440
Output : 16

Input : 5733
Output : -18
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                          //
// Description   : Function accepts integer and returns difference between summation of even and odd digits.                //
// Function Name : CountDiff                                                                                                //
// Input         : int iNo                                                                                                  //
// Output        : int (Difference between sum of even and odd digits)                                                      //
// Author        : Pallavi Omprakash Malewar                                                                                //
// Date          : 20/06/2025                                                                                               //
//                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0 , iSumE = 0 , iSumO = 0 , iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSumE - iSumO;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of even & odd digits : %d\n",iRet);

    return 0;
}