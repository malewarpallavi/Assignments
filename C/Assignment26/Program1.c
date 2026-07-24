///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which accept string & a character from user. Check whether that character is present in string or not.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"
            e

Output :    TRUE

Input :     "Marvellous Multi OS"
            W

Output :    FALSE

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    bRet = CheckChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found.\n");
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}