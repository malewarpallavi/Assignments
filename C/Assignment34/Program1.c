//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a program which search first occurence of particular element from singly linear linked list.
//               Function should return position at which element is found.
// Author :      Pallavi Omprakash Malewar
// Date :        26/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

    Input Linked List : |10| -> |20| -> |30| -> |40| -> |50| -> |60| -> |70| -> NULL
    Input Element : 30
             
    Output : 3

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

    int iRet = SearchFirstOcc(First, 40);
    printf("%d\n", iRet);

    return 0;
}