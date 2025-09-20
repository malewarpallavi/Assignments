/////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program to which accept number from user & display below pattern.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : *   *   *   *   *   #   #   #   #   #

// Input : 6
// Output : *   *   *   *   *   *   #   #   #   #   #   #

// Input : -5
// Output : *   *   *   *   *   #   #   #   #   #

// Input : 2
// Output : *   *   #   #

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Validation
        - If N is negative:
            - Convert N to positive (N = -N).

    Processing

        - First Loop (For printing '*'):
            - Initialize COUNT1 = 1.
            - Repeat while COUNT1 <= N:
                - Print "*"
                - Increment COUNT1 by 1.

        - Second Loop (For printing '#'):
            - Initialize COUNT2 = 1.
            - Repeat while COUNT2 <= N:
                - Print "#"
                - Increment COUNT2 by 1.

    Output
        - Display the pattern: N times '*' followed by N times '#'.

    END
*/


#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount1 = 0 , iCount2 = 0 ;

    for(iCount1 = 1 ; iCount1 <= iNo ; iCount1++)
    {
        printf("*\t");
    }
    for(iCount2 = 1 ; iCount2 <= iNo ; iCount2++)
    {
        printf("#\t");
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