////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which accept one number & two positions from user & check whether bit at first or bit at second positon is ON or OFF.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  10    3    7
             
    Output : FALSE

    Input :  15    1    4
             
    Output : TRUE

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, int iPos1, int iPos2)
{    
    UINT iMask = (1 << (iPos1 - 1)) | (1 << (iPos2 - 1));

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    UINT iNo = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u", &iNo);

    printf("Enter the Position 1 : ");
    scanf("%d", &iPos1);

    printf("Enter the Position 2 : ");
    scanf("%d", &iPos2);

    bRet = CheckBit(iNo, iPos1, iPos2);

    if(bRet == TRUE) printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}