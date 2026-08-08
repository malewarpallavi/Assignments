////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write an program which accept one number from user & off 7th & 10th bit of that number if it is ON. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 577
    Output : 1

*/


#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

UINT OffBit(UINT iNo)
{
    int iMask1 = 1 << 6;
    int iMask2 = 1 << 9;

    if(((iNo & iMask1) == iMask1) && ((iNo & iMask2) == iMask2))
    {
        iMask1 = ~iMask1;
        iMask2 = ~iMask2;

        iNo = iNo & iMask1;
        iNo = iNo & iMask2;
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