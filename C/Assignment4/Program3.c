//////////////////////////////////////////////////////
//
// File name :   Program3.c
// Description : Program to display all non-factors 
// Author :      Pallavi Omprakash Malewar
// Date :        20/05/2025
//
/////////////////////////////////////////////////////

/*
    START

    Input  
        - Read an integer value from the user.

    Validation
        - If the input is negative, convert it to its absolute value.

    Initialization
        - Initialize loop counter 'iCnt' to 1.

    Processing
        - Loop from iCnt = 1 to iCnt <= input:
            - If (input % iCnt != 0), then:
                - Print iCnt (it is a non-factor).

    Output
        - All non-factors will be printed.

    END
    
*/


#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}