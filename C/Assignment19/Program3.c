////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Program which accept N number from user & check whether 11 present in it or not
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            Elements: 85   66   11   80   93    88

Output :    11 is present


Input :     N :       6
            Elements: 85   66   3   80   93    88

Output :    11 is absent
*/



#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);
    return 0;
}