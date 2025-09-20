/////////////////////////////////////////////////////////////
//
// File name :   Program2.c
// Description : Used to print 5 times "Marvellous" on Screen
// Author :      Pallavi Omprakash Malewar
// Date :        18/05/2025
//
/////////////////////////////////////////////////////////////

/*
    START

    Initialization
        - Initialize a counter variable 'i' to 1.

    Looping Logic  
        - Repeat while 'i <= 5':
            - Print "Marvellous".
            - Increment counter 'i' by 1.

    END
    
*/


#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 1 ; i <= 5 ; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}