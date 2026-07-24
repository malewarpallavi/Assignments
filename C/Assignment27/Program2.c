//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which accept string from user & copy the content of string into another string. (Implement strcpy() function)
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     "Marvellous Multi OS"
            10

Output :    "Marvellous Multi OS"       

*/

#include<stdio.h>
#include<stdlib.h>

void StrCopy(char *str, char *dest, int iCount)
{
    if(str == NULL) return;

    int StrLength = 0;
    char temp = '\0';
    char *start = '\0';

    start = str;

    while(*start != '\0')
    {
        StrLength++;
        start++;
    }

    if(iCount >= StrLength)
    {
        temp = *str;
        *str = *dest;
        *dest = temp;

        str++;
        dest++;
    }

    while(iCount != 0)
    {
        temp = *str;
        *str = *dest;
        *dest = temp;

        str++;
        dest++;

        iCount--;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    int iNo;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter number : ");
    scanf("%d", &iNo);

    StrCopy(arr, brr, iNo);

    printf("%s\n", brr);

    return 0;
}