//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write a program which accept string from user & toggle case.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous Multi OS"

Output :    "mARVELLOUS mULTI os"

*/

#include<stdio.h>
#include<stdlib.h>

void strToggle(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            *str = *str - 32;
        }
        else if(*str <= 'Z' && *str >= 'A')
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

    strToggle(arr);

    printf("Modified String is %s.\n", arr);

    return 0;
}