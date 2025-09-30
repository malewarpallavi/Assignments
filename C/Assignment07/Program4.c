//////////////////////////////////////////////////////////////////////
//                                                                  //
// File name :   Program4.c                                         //
// Description : Program to find ODD factorial of given number.     //
// Author :      Pallavi Omprakash Malewar                          //
// Date :        15/06/2025                                         //
//                                                                  //
//////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter a number.
        - Read the number and store it in 'N'.

    Validation
        - If N is negative:
            - Convert N to positive (N = -N).

    Initialization
        - Set COUNT = 3.
        - Set ANS = 1.

    Processing
        - Repeat the following steps while COUNT is less than or equal to N:
            - Multiply ANS = ANS * COUNT.
            - Increment COUNT by 2.

    Output
        - Display the ODD factorial value (ANS).

    END
*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// Function name :   OddFactorial                                                                    //
// Description   :   Accepts a number and returns the factorial of all odd numbers up to that number //
// Input         :   int iNo  -> Number for which odd factorial is to be calculated                  //
// Output        :   int      -> Odd factorial value                                                 //
// Logic         :   Multiply all odd numbers from 3 to iNo                                          //
// Author        :   Pallavi Omprakash Malewar                                                       //
// Date          :   15/06/2025                                                                      //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount = 0 , iAns = 1;

    for(iCount = 3 ; iCount <= iNo ; iCount+=2)
    {
        iAns = iAns * iCount;
    }
    return iAns;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of %d is %d\n",iValue,iRet);

    return 0;
}