////////////////////////////////////////////////////////////////
//                                                            //
// File name :   Program3.c                                   //
// Description : Program to print 5 to 1 numbers on Screen    //
// Author :      Pallavi Omprakash Malewar                    //
// Date :        18/05/2025                                   //
//                                                            //
////////////////////////////////////////////////////////////////

/*
    START

    Initialization
        - Initialize a variable 'i' with value 5.

    Looping Logic  
        - While 'i >= 1':
            - Print the current value of 'i'.
            - Decrement 'i' by 1.

    END

*/


#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}