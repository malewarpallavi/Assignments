/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Accept character from user & check whether it is an small case or not.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     g

Output :    TRUE

Input :     D

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmallCase(char ch)
{
    if(ch <= 'z' && ch >= 'a')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckSmallCase(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Case\n");
    }
    else
    {
        printf("It is not a Small Case\n");
    }
    return 0;
}