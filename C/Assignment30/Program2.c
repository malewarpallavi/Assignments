//////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write an program which check whether 5th & 18th bit is ON or OFF.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 0
    Output : OFF

    Input : 16
    Output : OFF

    Input : 131089
    Output : ON

    Input : 131088
    Output :  ON

*/


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 4;
    UINT iMask2 = 1 << 17;

    if(((iNo & iMask1) == iMask1) && (iNo & iMask2) == iMask2)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iNo);

    bRet = CheckBit(iNo);

    if(bRet == TRUE)
    {
        printf("5th Bit & 18th Bit is ON.\n");
    }
    else
    {
        printf("5th Bit & 18th Bit is OFF.\n");
    }

    return 0;
}