/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Accept character from user. If it is capital then display all the characters from the input characters till Z. 
//               If input is small then pritn all characters in reverse order till a. In other cases return directly.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     Q

Output :    Q   R   S   T   U   V   W   X   Y   Z

Input :     m

Output :    m   l   k   j   i   h   g   f   e   d   c   b   a

Input :     4

Output :    4

*/


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch <= 'Z' && ch >= 'A')
    {
        while(ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if(ch <= 'z' && ch >= 'a')
    {
        while(ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }
    else
    {
        printf("%c", ch);
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}