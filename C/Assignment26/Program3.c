///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write a program which accept string & a character from user. Return index of first occurence of that character.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"
            M

Output :    0

Input :     "Marvellous Multi OS"
            e

Output :    4

*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch) return index;
        str++;
        index++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);

    if(iRet == -1)
    {
        printf("Character is not present.\n");
    }
    else
    {
        printf("Character location is %d\n", iRet);
    }

    return 0;
}