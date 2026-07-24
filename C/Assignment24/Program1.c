/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write  program which accept string from user & count number of capital characters.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "Marvellous Multi OS"

Output :    4

*/


#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if(str == NULL) return -1;

    while(*str != '\0')
    {
        if(*str <= 'Z' && *str >= 'A')
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

    iRet = CountCapital(arr);
    printf("%d\n", iRet);

    return 0;
}