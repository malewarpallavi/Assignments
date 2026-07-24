/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Accept N number from user & display all such numbers which contains 3 digits in it.
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6

            Elements: 8225  665 3   76  953   858

Output :    665     953     858

*/


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iDigit = 0, iCount = 0;

    for(int i = 0; i < iLength ; i++)
    {
        int No = Arr[i];
        iCount = 0;

        while(No != 0)
        {
            iCount++;
            No /= 10;
        }

        if(iCount >= 3) printf("%d\t", Arr[i]);
    }
    printf("\n");
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

    Digits(p, iSize);

    free(p);
    return 0;
}