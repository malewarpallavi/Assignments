//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which accept string from user & Count number of white spaces.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "MarvellouS"

Output :    0

Input :     "Marvellous Infosystems by Piyush M Khairnar"

Output :    5

*/

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str <= ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}