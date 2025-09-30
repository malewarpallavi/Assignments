////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                            //
// File name :   Program2.c                                                                                                                   //    
// Description : Program which accept amount in US dollar & return its corresponding value in indian currency Considering 1$ as 70 rupees.    //
// Author :      Pallavi Omprakash Malewar                                                                                                    //
// Date :        15/06/2025                                                                                                                   //
//                                                                                                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter amount in US Dollars.
        - Read the amount and store it in 'USD'.

    Processing
        - Calculate INR = USD * 70.

    Output
        - Display the equivalent amount in Indian Rupees (INR).

    END
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// Function name :   DollarToINR                                                                    //
// Description   :   Accepts amount in US dollars and returns equivalent value in INR               //
// Input         :   int iNo  -> Amount in US dollars                                               //
// Output        :   int      -> Equivalent amount in Indian Rupees                                 //
// Logic         :   Multiply the USD amount by 70 to get INR                                       //
// Author        :   Pallavi Omprakash Malewar                                                      //
// Date          :   15/06/2025                                                               s      //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iDollar = 0;

    iDollar = (70 * iNo);

    return iDollar;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number of USD : ");

    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d.\n",iRet);

    return 0;
}