//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which accept string & a character from user. Return frequency of that character.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"
            M

Output :    2

Input :     "Marvellous Multi OS"
            W

Output :    0

*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch) iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character Frequency is %d\n", iRet);

    return 0;
}