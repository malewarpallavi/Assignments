////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write an program which accept one number from user & toggle 7th bit of that number if it is ON. Return modified number.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 137
    Output : 201

*/


#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

UINT ToggleBit(UINT iNo)
{
    int iMask = 1 << 6;

    return iNo ^ iMask;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    iRet = ToggleBit(iNo);

    printf("%d\n", iRet);

    return 0;
}