//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which accept string from user & toggle case.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "marve89llous121"

Output :    89121

Input :     "Demo"

Output :    

*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str <= '9' && *str >= '0')
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}