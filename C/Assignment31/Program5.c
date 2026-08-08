///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write an program which accept one number from user & ON it's first 4 bits. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 73
    Output : 79

*/


#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

UINT ONBit(UINT iNo)
{
    int iMask = 0x0F;

    return iNo | iMask;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    iRet = ONBit(iNo);

    printf("%d\n", iRet);

    return 0;
}