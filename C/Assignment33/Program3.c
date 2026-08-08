/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write a program which accept one numbers from user & check whether 9th & 12th bit is ON or OFF.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  257
             
    Output : TRUE

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{    
    UINT iMask = (1 << 8) | (1 << 11);

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u", &iNo);

    bRet = CheckBit(iNo);

    if(bRet == TRUE) printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}