////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Program which accept N number from user & return difference between frequency of even & odd numbers
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            Elements: 85   66   3   80   93    88

Output :    1 ( 4 - 3 )
*/



#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int EvenCount = 0, OddCount = 0;

    for(int i = 0; i < iLength ; i++)
    {
        if(Arr[i] % 2 == 0) EvenCount++;
        else OddCount++;
    }
    int diff = EvenCount - OddCount;
    return diff;
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
    iRet = Frequency(p, iSize);

    printf("Difference between frequency of even & odd numbers : %d\n", iRet);

    free(p);
    return 0;
}