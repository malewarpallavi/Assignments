///////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write an program which check whether 7th, 15th, 21th & 28th bit is ON or OFF.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 0
    Output : OFF

    Input : 15
    Output : OFF

    Input : 135282752
    Output : ON

    Input : 135282753
    Output :  ON

*/


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 6;
    UINT iMask2 = 1 << 14;
    UINT iMask3 = 1 << 20;
    UINT iMask4 = 1 << 27;

    if(((iNo & iMask1) == iMask1) && ((iNo & iMask2) == iMask2) && ((iNo & iMask3) == iMask3) && ((iNo & iMask4) == iMask4))
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
        printf("7th, 15th, 21st Bit & 28th Bit is ON.\n");
    }
    else
    {
        printf("7th, 15th, 21st Bit & 28th Bit is OFF.\n");
    }

    return 0;
}