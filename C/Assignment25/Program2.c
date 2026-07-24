//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which accept string from user & convert it into capital case.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous Multi OS"

Output :    "MARVELLOUS MULTI OS"

*/

#include<stdio.h>
#include<stdlib.h>

void strCapCase(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    strCapCase(arr);

    printf("Modified String is %s.\n", arr);

    return 0;
}