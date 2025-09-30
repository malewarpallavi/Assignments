//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// File name :   Program2.c                                                             //
// Description : Program to disply factors in decreasing order of given numbers         //
// Author :      Pallavi Omprakash Malewar                                              //
// Date :        20/05/2025                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input  
        - Read an integer value.

    Validation
        - If the input is negative, convert it to its absolute value.

    Initialization
        - Set loop counter 'iCnt' to (input / 2).

    Processing
        - Loop from (input / 2) down to 1:
            - For each iteration:
            - If (input % iCnt == 0), it is a factor.
            - Print the factor.

    Output
        - All factors will be printed in decreasing order.

    END

*/
  

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Function Name : FactRev                                                      //
// Description   : Prints all factors of the given number in decreasing order   //
// Input         : int iNo  -> the number whose factors are to be displayed     //
// Output        : Console output of factors in decreasing order                //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    printf("%d\n",iNo);
    for(iCnt = (iNo/2) ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}