//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Write a program which accept one number & position from user & toggle that bit. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :  10
             3

    Output : 14

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32) return FALSE;
    
    UINT iMask = 1 << (iPos - 1);
    return iNo ^ iMask;
}

int main()
{
    UINT iNo = 0, iPos = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    printf("Enter Position : ");
    scanf("%d", &iPos);

    iRet = ToggleBit(iNo, iPos);

    printf("%d\n", iRet);

    return 0;
}