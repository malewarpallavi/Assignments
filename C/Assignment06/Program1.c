//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// File name : Program1.c                                                       //
// Problem Statement : Accept a number from user and print whether              //
//                     it is small (<50), medium (50-100), or large (>100)      //
// Author : Pallavi Omprakash Malewar                                           //
// Date : 15/06/2025                                                            //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Function Name   : Number                                                     //
// Problem Statement : Accept an integer and print whether it is small (<50),   //
//                     medium (50-100), or large (>100)                         //
// Input           : iNo (integer) - number to check                            //
// Output          : Prints whether the number is small, medium, or large       //
// Author          : Pallavi Omprakash Malewar                                  //
// Date            : 15/06/2025                                                 //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

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