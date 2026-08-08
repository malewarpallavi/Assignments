////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write an program which accept one number from user & off 7th bit of that number if it is ON. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 79
    Output : 15

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

UINT OffBit(UINT iNo)
{
    // int iMask = 0x00000040;
    int iMask = 1 << 6;

    if((iNo & iMask) == iMask)
    {
        iMask = ~iMask;
        iNo = iNo & iMask;
    }

    return iNo;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    iRet = OffBit(iNo);

    printf("%d\n", iRet);

    return 0;
}