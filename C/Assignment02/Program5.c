//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// File name :   Program5.c                                                                         //
// Description : Program to accept one number and print that number of even numbers on screen       //  
// Author :      Pallavi Omprakash Malewar                                                          //
// Date :        19/05/2025                                                                         //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input  
        - Read an integer value from the user.

    Validation
        - If the input is negative, convert it to its absolute value.

    Processing
        - Loop from 2 to (2 × input value), incrementing by 1:
            - In each iteration, check if the current value is divisible by 2.
            - If divisible, print the current value.

    Output
        - The specified count of even numbers is displayed.

    END
    
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Function Name : PrintEvenNumbers                                             //
// Description   : Prints the first 'iNo' even numbers starting from 2          //
// Input         : int iNo  -> the number of even numbers to print              //
// Output        : Console output of even numbers                               //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

void PrintEvenNumbers(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;         
    }

    int iCnt = 0;
    int iEven = 2;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iEven);
        iEven += 2;
        
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    PrintEvenNumbers(iValue);

    return 0;
}