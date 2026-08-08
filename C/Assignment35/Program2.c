/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write a program which displays all elememts which are prime from singly linear linked list.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input Linked List : |11| -> |20| -> |17| -> |41| -> |22| -> |89| -> NULL
             
    Output : 11   17   41   89

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

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
    InsertFirst(&First, 70);

    DisplayPrime(First);

    return 0;
}