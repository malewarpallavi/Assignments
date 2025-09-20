/////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Used to Divide Two Numbers
// Author :      Pallavi Omprakash Malewar
// Date :        18/05/2025
//
/////////////////////////////////////////////////////////////

/*
    START

    Input  
    - Use values for two integers 'iValue1' and 'iValue2'.

    Division Logic
    - If denominator 'iNo2' is zero:
        - Return '-1' (error code for division by zero).
    - Else:
        - Perform division 'iNo1 / iNo2' and return result.

    Output  
        - Display the result on screen.

    END

*/


#include<stdio.h>

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2 ;

    return iAns;
}

int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is %d",iRet);

    return 0;
}