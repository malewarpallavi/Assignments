//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program which accept number from user & if number is less than 50 then print small , if it is in between 50 & 100 then print medium
//               & if it is greater than 100 then print large.
// Author :      Pallavi Omprakash Malewar
// Date :        15/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Processing
        - If N is less than 50:
            - Print "N is small."
        - Else if N is between 50 and 100 (including 50 and 100):
            - Print "N is medium."
        - Else if N is greater than 100:
            - Print "N is large."

    Output
        - Display whether the number is small, medium, or large.

    END
*/


#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("%d is small.\n",iNo);
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("%d is medium.\n",iNo);
    }
    else if(iNo > 100)
    {
        printf("%d is large.\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}