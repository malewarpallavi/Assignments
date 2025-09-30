//////////////////////////////////////////////////////////////////////
//                                                                  //
// File name :   Program2.c                                         //
// Description : Program to Display Hello or Demo on Condition      //
// Author :      Pallavi Omprakash Malewar                          //
// Date :        18/05/2025                                         //
//                                                                  //
//////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Read an integer value from the user.

    Processing
        - If the input value is less than 10:
            - Display the first output.
        - Else:
            - Display the second output.

    Output
        - The appropriate output is displayed based on the condition.

    END

*/


#include<stdio.h>
    
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}