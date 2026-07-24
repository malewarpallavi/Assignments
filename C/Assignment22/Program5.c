/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Accept division of student & depends on the division display exam timing. 
//               There are 4 divisions in school as A, B, C, D.
//                  Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM & D at 10:30 AM.
// Author :      Pallavi Omprakash Malewar
// Date :        21/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     g

Output :    TRUE

Input :     D

Output :    FALSE

*/


#include<stdio.h>
#include<stdlib.h>

void Displayschedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam is at 7 AM\n");
    }
    else if (chDiv == 'B')
    {
        printf("Your exam is at 8:30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam is at 9:20 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam is at 10:30 AM\n");
    }
    else
    {
        printf("Enter Valid Division.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Displayschedule(cValue);

    return 0;
}