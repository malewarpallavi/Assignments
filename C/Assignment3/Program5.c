//////////////////////////////////////////////////////////////////////////
//
// File name :   Program5.c
// Description : Program to check whether given character is vowel or not
// Author :      Pallavi Omprakash Malewar
// Date :        20/05/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Read a character from the user.

    Processing
        - Compare the input character with all vowel characters:
            - 'a', 'e', 'i', 'o', 'u'
            - 'A', 'E', 'I', 'O', 'U'
        - If the character matches any of these, it is a vowel.

    Decision
        - If vowel, return TRUE.
        - Else, return FALSE.

    Output
        - Display whether the character is a vowel or not.

    END

*/


#include<stdio.h>

typedef int BOOl;

#define TRUE 1
#define FALSE 0

BOOl CheckVowel(char ch)
{
    BOOl bRet = FALSE;
    
    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
    {
        bRet = TRUE;
    }
    else
    {
        bRet = FALSE;
    }
    return bRet;
}
int main()
{
    char cValue = '\0';
    BOOl bRet = FALSE;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }
    return 0;
}