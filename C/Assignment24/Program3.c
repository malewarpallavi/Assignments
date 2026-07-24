////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write a program which accept string from user & return difference between frequency of small & capital characters.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous"

Output :    6 (8-2)

*/


#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int CapCnt = 0, SmallCnt = 0, diff = 0;

    if(str == NULL) return -1;

    while(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            SmallCnt++;
        }
        else if(*str <= 'Z' && *str >= 'A')
        {
            CapCnt++;
        }
        str++;
    }
    diff = SmallCnt - CapCnt;
    if(diff < 0) return -diff;

    return diff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);
    printf("%d\n", iRet);

    return 0;
}