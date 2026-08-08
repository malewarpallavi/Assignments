////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which accept one number & position from user & check whether bit at that position is on or off. If bit is one return TRUE else FALSE.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  10
             2
    Output : TRUE

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32) return FALSE;
    
    int iMask = 1 << (iPos - 1);

    if((iNo & iMask) == iMask) return TRUE;
    return FALSE;
}

int main()
{
    int iNo = 0, iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    printf("Enter Position : ");
    scanf("%d", &iPos);

    bRet = CheckBit(iNo, iPos);

    printf("%s\n", (bRet == TRUE) ? "TRUE" : "FALSE");

    return 0;
}