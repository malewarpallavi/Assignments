/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Accept character from user. If character is small display its corresponding capital char, 
//               & if it is capital then display corresponding capital. In other cases display as it is.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     Q

Output :    q

Input :     m

Output :    M

Input :     4

Output :    4

Input :     %

Output :    %

*/


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch <= 'Z' && ch >= 'A')
    {
        int temp = ch - 'A';
        printf("%c\n", 'a' + temp);
    }
    else if(ch <= 'z' && ch >= 'a')
    {
        int temp = ch - 'a';
        printf("%c\n", 'A' + temp);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}