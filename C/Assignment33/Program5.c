/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which accept one number & range of positions from user & Toggle all bits from that range.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  897    9    13
             
    Toggle all bits from position 9 to 13 of input number i.e. 7297

    Input :  0    1     4

    Output: 15

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{    
    int iRet = 0;
    int iMask = 0;

    // With Loop
    // for(int i = iStart ; i <= iEnd ; i++)
    // {
    //     iMask = iMask | (1 << (i - 1));
    // }

    iMask = ((1 << ((iEnd - iStart) + 1)) -1) << (iStart - 1);

    return iNo ^ iMask;
}

int main()
{
    UINT iNo = 0;
    int iStart = 0, iEnd = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u", &iNo);

    printf("Enter the Start : ");
    scanf("%d", &iStart);

    printf("Enter the End : ");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iNo, iStart, iEnd);

    printf("%u\n", iRet);

    return 0;
}