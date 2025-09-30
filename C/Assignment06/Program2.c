////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// File name :   Program2.c                                                                       //
// Description : Program which accept single digit number from user and print it into word.       //
// Author :      Pallavi Omprakash Malewar                                                        //
// Date :        15/06/2025                                                                       //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a single digit number.
        - Read the number and store it in 'N'.

    Processing
        - If N is negative:
            - Print "Minus"
            - Convert N to positive (N = -N)

        - Use switch-case on N:
            - If N is 0: Print "Zero"
            - If N is 1: Print "One"
            - If N is 2: Print "Two"
            - If N is 3: Print "Three"
            - If N is 4: Print "Four"
            - If N is 5: Print "Five"
            - If N is 6: Print "Six"
            - If N is 7: Print "Seven"
            - If N is 8: Print "Eight"
            - If N is 9: Print "Nine"
            - For any other value: Print "Invalid Input."

    Output
        - Display the word corresponding to the digit.

    END
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Function Name      : Display                                                 //
// Problem Statement  : Accept a single-digit number from user and print it     //
//                      in words. If the number is negative, print "Minus"      //
//                      first.                                                  //
// Input              : iNo (integer) - single-digit number                     //
// Output             : Prints the word corresponding to the digit or "Invalid" //
// Author             : Pallavi Omprakash Malewar                               //
// Date               : 15/06/2025                                              //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        printf("Minus ");
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid Input.\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Single Digit Number : ");

    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}