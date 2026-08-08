////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Write a program which accept one number & position from user & toggle contents of first & last nibble of that number. Return modified number.
//               (Nibble is a group of four bits)
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;

    return iNo ^ iMask;
}

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    iRet = ToggleBit(iNo);

    printf("%d\n", iRet);

    return 0;
}