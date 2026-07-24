////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Accept N number from user & Accept one number NO & check whether NO is present or not.
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            No:       66
            Elements: 85   66   3   66   93    88

Output :    TRUE


Input :     N :       6
            No:       12
            Elements: 85   11   3   15   11    111

Output :    FALSE
*/



#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCount = 0;

    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0;
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
    printf("Enter number you want to find : ");
    scanf("%d", &iNo);

    bRet = Check(p, iSize, iNo);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else 
    {
        printf("FALSE\n");
    }

    free(p);
    return 0;
}