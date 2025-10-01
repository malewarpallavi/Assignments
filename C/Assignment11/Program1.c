//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// File name :   Program1.c                                                     //  
// Description : Program which accept number from user & return alphabets       //
// Author :      Pallavi Omprakash Malewar                                      //
// Date :        21/06/2025                                                     //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////


/*
Input : 5
Output : A   B   C   D   E
*/


#include<stdio.h>

void Pattern(int iNo)
{
    char ch = '\0';

    int iCount = 0;

    for(iCount = 0 ; iCount < iNo ; iCount++)
    {
        printf("%c\t" , 'A' + iCount);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");

    scanf("%d" , &iValue);

    Pattern(iValue);

    return 0;
}