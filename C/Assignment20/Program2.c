////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Accept N number from user & Accept one number NO & return index of first occurence of that NO.
// Author :      Pallavi Omprakash Malewar
// Date :        17/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Input :     N :       6
            No:       66
            Elements: 85   66   3   66   93    88

Output :    1


Input :     N :       6
            No:       12
            Elements: 85   11   3   15   11    111

Output :    -1
*/



#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0;
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
    printf("Enter number you want to find : ");
    scanf("%d", &iNo);

    iRet = FirstOcc(p, iSize, iNo);

    printf("%d\n", iRet);

    free(p);
    return 0;
}