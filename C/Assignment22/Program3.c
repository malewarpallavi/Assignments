/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Accept character from user & check whether it is a Digit or not.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     7

Output :    TRUE

Input :     d

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if(ch <= '9' && ch >= '0')
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

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }
    return 0;
}