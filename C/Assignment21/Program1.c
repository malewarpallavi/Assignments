/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Accept N number from user & return the largest number.
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6

            Elements: 85   66   3   66   93    88

Output :    93

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];

    for(int i = 0 ; i < iLength ; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Maximum(p, iSize);

    printf("Largest Number is %d\n", iRet);

    free(p);
    return 0;
}