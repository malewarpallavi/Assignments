////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// File name :   Program4.c                                                           //
// Description : Program to check whether the Number is Divisible by 5 or not         //
// Author :      Pallavi Omprakash Malewar                                            //
// Date :        18/05/2025                                                           //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

/*
    
    START

    Input  
    - Accept an integer from the user.

    Processing
    - Calculate the remainder when the input is divided by 5.
    - If remainder equals 0:
        - The number is divisible by 5.
    - Else:
        - The number is not divisible by 5.

    Output
        - Display the Answer.

    END

*/

#include<stdio.h>

typedef int BOOl;
#define TRUE 1
#define FALSE -1

/////////////////////////////////////////////////////////////
//                                                         //
// Function : Check                                        //
// Purpose  : Checks whether the number is divisible by 5  //
// Input    : int iNo                                      //
// Output   : int (TRUE if divisible, FALSE otherwise)     //
//                                                         //
/////////////////////////////////////////////////////////////

BOOl Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOl bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}