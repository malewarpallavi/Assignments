/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Accept character from user & check whether it is an alphabet or not.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     F

Output :    TRUE

Input :     &

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if((ch <= 'Z' && ch >= 'A') || (ch >= 'a' && ch <= 'z'))
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

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }
    return 0;
}