////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write an program which check whether 15th bit is ON or OFF.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
////////////////////////////////////////////////////////////////////////////////


/*

    Input : 0
    Output : OFF

    Input : 16384
    Output : ON

    Input : 32768
    Output :  ON

*/


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    // UINT iMask = 1 << 14;
    UINT iMask = 0x00004000;

    if((iNo & iMask) == iMask)
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
        printf("15th Bit is ON.\n");
    }
    else
    {
        printf("15th Bit is OFF.\n");
    }

    return 0;
}