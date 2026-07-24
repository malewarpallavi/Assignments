////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Program which accept N number from user & display all such elements which are multiples of 11
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            Elements: 85   66   3   55   93    88

Output :    66   55   88
*/



#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int iLength)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d\n", Arr[i]);
        }
    }
    return;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }
    display(p, iSize);

    free(p);
    return 0;
}