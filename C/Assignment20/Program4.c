/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Accept N number from user & Accept Range & Display all elements from that range
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            Start:    60
            End:      90
            Elements: 85   66   3   76   93    88

Output :    3


Input :     N :       6
            Start:    30
            No:       50
            Elements: 85   66   3   76   93    88

Output :    4

*/


#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] > iStart && Arr[i] < iEnd)
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
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
    printf("Enter the starting point : ");
    scanf("%d", &iStart);

    printf("Enter the ending point : ");
    scanf("%d", &iEnd);

    Range(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}