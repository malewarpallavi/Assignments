/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which accept string from user & count number of small characters.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous"

Output :    9

*/


#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(str == NULL) return -1;

    while(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);
    printf("%d\n", iRet);

    return 0;
}