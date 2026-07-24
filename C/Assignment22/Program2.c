/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Accept character from user & check whether it is an capital or not.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     F

Output :    TRUE

Input :     d

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if(ch <= 'Z' && ch >= 'A')
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Letter\n");
    }
    else
    {
        printf("It is not a Capital Letter\n");
    }
    return 0;
}