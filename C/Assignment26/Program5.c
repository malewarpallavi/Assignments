/////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which accept string from user & reverse that string in place.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "abcd"

Output :    "dcba"

Input :     "abba"

Output :    "abba"

*/

#include<stdio.h>
#include<stdlib.h>

void StrReverseX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;    
    }
    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    StrReverseX(arr);

    printf("Modified String is %s.\n", arr);

    return 0;
}