//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which accept two numbers from user & display position of common ON bits from that two numbers.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  10    5        (1010    1111)
             
    Output :  2    4

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

void CountOne(UINT iNo1, UINT iNo2)
{    
    int iCount = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        if(((iNo1 & 1) == 1) && (iNo2 & 1) == 1)
        {
            printf("%d\t", iCount);
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCount++;
    }
    printf("\n");
}

int main()
{
    UINT iNo1 = 0, iNo2 = 0;
    UINT iRet = 0;

    printf("Enter the number 1 : ");
    scanf("%d", &iNo1);

    printf("Enter the number 2 : ");
    scanf("%d", &iNo2);

    CountOne(iNo1, iNo2);

    return 0;
}