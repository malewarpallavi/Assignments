/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which displays ASCII table.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    char ch = 0;
    for(int i = 0; i < 255 ; i++)
    {
        printf("%d\t%c\t\t", ch, ch);
        ch++;
    }
}

int main()
{
    DisplayASCII();
    return 0;
}