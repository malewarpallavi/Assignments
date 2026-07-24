//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which accept string from user & display it in reverse order.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     "MarvellouS"

Output :    "SuollevraM"

*/


// #include<stdio.h>
// #include<stdlib.h>

// void ReverseDisplay(char *str)
// {
//     char *start = NULL;
//     int iCount = 0;

//     start = str;

//     while(*str != '\0')
//     {
//         iCount++;
//         str++;
//     }
//     str--;

//     while(str >= start)
//     {
//         printf("%c", *str);
//         str--;
//     }

//     printf("\n");
// }

// int main()
// {
//     char arr[20];

//     printf("Enter the String : ");
//     scanf("%[^'\n']s", arr);

//     ReverseDisplay(arr);

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;
    int iCount = 0;

    start = str;

    while(*start != '\0')
    {
        iCount++;
        start++;
    }
    start--;

    while(start >= str)
    {
        printf("%c", *start);
        start--;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    ReverseDisplay(arr);

    return 0;
}