//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which accept string from user & copy the content of string into another string. (Implement strcpy() function)
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"

Output :    "Marvellous Multi OS"       In another String

*/

#include<stdio.h>
#include<stdlib.h>

void StrCopy(char *str, char *dest)
{
    if(str == NULL) return;

    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    StrCopy(arr, brr);

    printf("%s\n", brr);

    return 0;
}