////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write a program which display largest digit of all element form singly linear linked list.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input Linked List : |11| -> |28| -> |170| -> |41| -> |6| -> |89| -> NULL
             
    Output : 1   8   7   4   6   9

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Next = NULL;
    newn -> Data = iNo;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

int SearchFirstOcc(PNODE Head, int iNo)
{
    int iPos = 1;
    PNODE temp = NULL;

    temp = Head;

    while(temp != NULL)
    {
        if(temp -> Data == iNo) return iPos;

        temp = temp -> Next;
        iPos++;
    }
    return -1;;
}

BOOL CheckPerfect(int iNo)
{
    int Sum = 0;
    for(int i = 1 ; i <= iNo/2 ; i++)
    {
        if(iNo % i == 0) Sum += i;
    }
    if(Sum == iNo) return TRUE;
    return FALSE;
}

void DisplayPerfect(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        BOOL bRet = CheckPerfect(temp -> Data);
        if(bRet == TRUE) printf("%d\t", temp -> Data);
        temp = temp -> Next;
    }
    printf("\n");
}

BOOL CheckPrime(int iNo)
{
    for(int i = 2 ; i <= (iNo/2) ; i++)
    {
        if(iNo % i == 0) return FALSE;
    }
    return TRUE;
}

void DisplayPrime(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        BOOL bRet = CheckPrime(temp -> Data);
        if(bRet == TRUE) printf("%d\t", temp -> Data);
        temp = temp -> Next;
    }
    printf("\n");
}

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)return TRUE;
    return FALSE;
}

void DisplayEven(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        BOOL bRet = CheckEven(temp -> Data);
        if(bRet == TRUE) printf("%d\t", temp -> Data);
        temp = temp -> Next;
    }
    printf("\n");
}

int SecLargest(PNODE Head)
{
    int max = 0, secMax = 0;
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        if(max < (temp -> Data) && (secMax <= max))
        {
            secMax = max;
            max = temp -> Data;
        }
        temp = temp -> Next;
    }
    return secMax;
}

void AdditionOfDigits(PNODE Head)
{
    int iDigit = 0;
    PNODE temp = NULL;

    temp = Head;

    while(temp != NULL)
    {
        int Sum = 0;
        int iNo = temp -> Data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            Sum += iDigit;
            iNo /= 10;    
        }
        printf("%d\t", Sum);

        temp = temp -> Next;
    }
    printf("\n");
}

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRet = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRet = iRet * 10 + iDigit;
        iNo /= 10;
    }
    return iRet;
}

void DisplayNumReverse(PNODE Head)
{
    PNODE temp = NULL;

    temp = Head;

    while(temp != NULL)
    {
        int iNo = temp -> Data;
        int iRet = Reverse(iNo);
        printf("%d\t", iRet);

        temp = temp -> Next;
    }
    printf("\n");
}

BOOL CheckPallindrome(int iNo)
{
    if(iNo < 0) return FALSE;
    if((iNo % 10 == 0) && (iNo != 0)) return FALSE;

    int iRev = 0;

    while(iNo > iRev)
    {
        iRev = (iRev * 10) + (iNo % 10);
        iNo /= 10;
    }
    return (iNo == iRev) || (iNo == (iRev / 10));
}

void DisplayPallindrome(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        int iNo = temp -> Data;
        BOOL bRet = CheckPallindrome(iNo);
        if(bRet == TRUE) printf("%d\t", iNo);

        temp = temp -> Next;
    }
    printf("\n");
}


int ProductOfDigits(int iNo)
{
    int iMul = 1;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        iMul *= iDigit;
        iNo /= 10;
    }
    return iMul;
}

void DisplayProduct(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        int iNo = temp -> Data;
        int iRet = ProductOfDigits(iNo);
        printf("%d\t", iRet);

        temp = temp -> Next;
    }
    printf("\n");
}

int FindSmallestDigit(int iNo)
{
    int iDigit = 0;
    int iSmall = iNo % 10;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iSmall > iDigit) iSmall = iDigit;

        iNo /= 10;
    }
    return iSmall;
}

void DisplaySmallestDigit(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        int iNo = temp -> Data;
        int iRet = FindSmallestDigit(iNo);
        printf("%d\t", iRet);

        temp = temp -> Next;
    }
    printf("\n");
}

int FindLargestDigit(int iNo)
{
    int iDigit = 0;
    int iLarge = iNo % 10;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iLarge < iDigit) iLarge = iDigit;

        iNo /= 10;
    }
    return iLarge;
}

void DisplayLargestDigit(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        int iNo = temp -> Data;
        int iRet = FindLargestDigit(iNo);
        printf("%d\t", iRet);

        temp = temp -> Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 989);
    InsertFirst(&First, 77);

    DisplayLargestDigit(First);

    return 0;
}