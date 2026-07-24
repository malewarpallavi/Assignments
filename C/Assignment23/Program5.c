/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Accept character from user. Check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     A

Output :    Decimal     65
            Octal       0101
            Hexadecimal 0X41

*/


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal\t%d\n", ch);
    printf("Octal\t%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}