//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program2.c
// Description : Write a program which accept one number & position from user & off that bit. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input :  10
             2
    Output : 8

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32) return FALSE;
    
    int iMask = 1 << (iPos - 1);
    iMask = ~iMask;

    return iNo & iMask;
}

int main()
{
    int iNo = 0, iPos = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    printf("Enter Position : ");
    scanf("%d", &iPos);

    iRet = OffBit(iNo, iPos);

    printf("%d\n", iRet);

    return 0;
}