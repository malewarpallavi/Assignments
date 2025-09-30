//////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                      //
// File name :   Program5.c                                                                             //  
// Description : Program to Display difference between summation of all its factors & non-factors       //
// Author :      Pallavi Omprakash Malewar                                                              //
// Date :        20/05/2025                                                                             //
//                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Take Input from User

        - Read and store the input value.

    Validation
        - If the input is negative, display invalid input.

    Initialization
        - Initialize a variable iSum1 to 0. This will store the summation of factors.

        - Initialize a variable iSum1 to 0. This will store the summation of non-factors.

        - Initialize a counter variable iCnt to 1.

    Processing
        - Loop while iCnt is less than or equal to iNo:

        - In each iteration:

            - Check whether iCnt is a factor of iNo or not by evaluating.

                - If that number is a factor then add it into iSum1

                - If that number is a non-factor then add it into iSum2

    Output
        - Display the final differnce of summation value stored in iDiff.

    END

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// Function Name : FactDiff                                                      //
// Description   : Calculates the absolute difference between the summation of   //
//                 all factors and all non-factors of the given number           //
// Input         : int iNo  -> the number whose factors and non-factors are used //
// Output        : int      -> absolute difference between sums                  //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0 , iSum1 = 0 , iSum2 = 0 , iDiff = 0;

    if(iNo <= 0)
    {
        printf("Invalid Input.\n");
        return 0;
    }

    for(iCnt = 1 ; iCnt <= (iNo) ; iCnt++)
    {
        if(((iNo % iCnt) == 0))
        {
            iSum1 = iSum1 + iCnt ;
        }
        else
        {
            iSum2 = iSum2 + iCnt ;
        }
    }

    iDiff = iSum1 - iSum2;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return 0;
}