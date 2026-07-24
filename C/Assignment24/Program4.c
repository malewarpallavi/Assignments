////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which accept string from user & check whether it contains vowels in it or not.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "marvellous"

Output :    TRUE

Input :     "Demo"

Output :    TRUE

Input :     "xyz"

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    if(str == NULL || *str == '\0') return FALSE;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    bRet = CheckVowel(arr);
    
    if(bRet == TRUE)
    {
        printf("Contains Vowel.\n");
    }
    else
    {
        printf("There is no Vowel.\n");
    }

    return 0;
}