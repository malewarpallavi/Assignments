////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which accept string from user & copy small characters of that string into another string.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous multi OS"

Output :    "arvellous multi"       

*/

#include<stdio.h>
#include<stdlib.h>

void StrCopyCap(char *str, char *dest)
{
    if(*str == '\0') return;
    
    char temp = '\0';

    while(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            temp = *str;
            *str = *dest;
            *dest = temp;

            dest++;
        }
        str++;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    int iNo;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    StrCopyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}