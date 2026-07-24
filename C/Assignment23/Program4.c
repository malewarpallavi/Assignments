/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Accept character from user. Check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     %

Output :    TRUE

Input :     d

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("%c is Special Character.\n", cValue);
    }
    else
    {
        printf("%c is not a Special Character.\n", cValue);
    }
    return 0;
}