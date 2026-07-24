//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which accept 2 strings from user & concat second string after first string. (Implement strcat() function).
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous Infosystems"
            "Logic Building"

Output :    "Marvellous Infosystems Logic Building"       

*/

#include<stdio.h>
#include<stdlib.h>

void StrCopyCap(char *str, char *dest)
{
    if(*dest == '\0') return;

    char temp = '\0';

    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
}

int main()
{
    char arr[50] = "Marvellous Infosystems ";
    char brr[30] = "Logic Building";

    StrCopyCap(arr, brr);

    printf("%s\n", arr);

    return 0;
}