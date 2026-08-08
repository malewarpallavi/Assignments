//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which accept one number  from user & count number of ON (1) bits in it without using % and / operator.
// Author :      Pallavi Omprakash Malewar
// Date :        25/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input :  11
             
    Output : 3

*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT CountOne(UINT iNo)
{    
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    iRet = CountOne(iNo);
    printf("%d\n", iRet);

    return 0;
}