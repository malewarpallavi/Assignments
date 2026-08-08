//////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write a program which returns smallest element from singly linear linked list.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////



/*

    Input Linked List : |10| -> |20| -> |30| -> |40| -> |50| -> |60| -> |70| -> NULL
             
    Output : 10

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


int SearchLastOcc(PNODE Head, int iNo)
{
    int iPos = 1, idx = 0;
    PNODE temp = NULL;

    temp = Head;
    while(temp != NULL)
    {   
        if(temp -> Data == iNo && idx < iPos)
        {
            idx = iPos;
        }
        temp = temp -> Next;
        iPos++;
    }
    return idx;
}

int Addition(PNODE Head)
{
    int sum = 0;
    PNODE temp = NULL;

    temp = Head;
    while(temp != NULL)
    {
        sum += temp -> Data;
        temp = temp -> Next;
    }
    return sum;
}

int Maximum(PNODE Head)
{
    int max = 0;
    PNODE temp = NULL;

    max = Head -> Data;
    temp = Head;

    while(temp != NULL)
    {
        if((temp -> Data) > max)
        {
            if(max < temp -> Data)
            {
                max = temp -> Data;
            }
        }
        temp = temp -> Next;
    }
    return max;
}

int Minimum(PNODE Head)
{
    int min = 0;
    PNODE temp = NULL;

    min = Head -> Data;
    temp = Head;

    while(temp != NULL)
    {
        if((temp -> Data) < min)
        {
            min = temp -> Data;
        }
        temp = temp -> Next;
    }
    return min;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 90);
    InsertFirst(&First, 80);
    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int iRet = Minimum(First);
    printf("%d\n", iRet);

    return 0;
}

