///////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write an program which check whether 1st & last bit is ON or OFF.
//               (1st bit means bit number 1 & last bit means but number 32).
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 0
    Output : OFF

    Input : 2147483648
    Output : OFF

    Input : 2147483649
    Output : ON

    Input : 4294967295
    Output :  ON

*/


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 0;
    UINT iMask2 = 1 << 31;

    // UINT iMask = 0x80000001;

    if(((iNo & iMask1) == iMask1) && ((iNo & iMask2) == iMask2))
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
        printf("1st & last Bit is ON.\n");
    }
    else
    {
        printf("1st & last Bit is OFF.\n");
    }

    return 0;
}