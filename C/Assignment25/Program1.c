//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which accept string from user & convert it into lower case.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous Multi OS"

Output :    "marvellous multi os"

*/


#include<stdio.h>
#include<stdlib.h>

void strSmallCase(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 'Z' && *str >= 'A')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    strSmallCase(arr);

    printf("Modified String is %s.\n", arr);

    return 0;
}