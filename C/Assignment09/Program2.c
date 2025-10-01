//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                          //
// File name :   Program2.c                                                                                 //
// Description : Program to which accept number from user & check whether it contains 0 in it or not.       //
// Author :      Pallavi Omprakash Malewar                                                                  //
// Date :        20/06/2025                                                                                 //
//                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : 2395
Output : There is no Zero

Input : 1018
Output : It contains Zero

Input : 9000
Output : It contains Zero

Input : 10687
Output : It contains Zero
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bRet = FALSE;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bRet = TRUE;
            break;
        }
        else
        {
            bRet = FALSE;
        }
        iNo = iNo / 10;
    }
    return bRet;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}