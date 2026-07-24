///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which accept string & a character from user. Return index of last occurence of that character.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"
            M

Output :    11

Input :     "Marvellous Multi OS"
            W

Output :    -1

*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int length = 0;
    int backCnt = 0;
    char *start = '\0';

    start = str;

    while(*start != '\0')
    {
        length++;
        start++;
    }

    start--;

    while(start >= str)
    {
        backCnt++;
        if(*start == ch) return length - backCnt;
        start--;
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

    iRet = LastChar(arr, cValue);

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