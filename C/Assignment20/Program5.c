/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Accept N number from user & return product of all elemenets
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6

            Elements: 15   66   3   70   10    88

Output :    45


Input :     N :       6

            Elements: 44   66   3   70   10    88

Output :    0

*/


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iMul = 1;

    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iMul *= Arr[i];
        }
    }
    return iMul;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet  =0;
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

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}