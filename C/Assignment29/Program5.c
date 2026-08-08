//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write an program which accepts file name & character from user & count number of occurences of that characters from that file.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt
            '12

Output :    First 12 characters from Demo.txt

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char FName[], int num)
{
    int fd = 0, iRet = 0;
    char Buffer[1025];

    // Open file in read mode
    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    if(num > 1024)
    {
        num = 1024;
    }

    // Read the data into local array
    iRet = read(fd, Buffer, num);

    if(iRet == -1)
    {
        printf("Unable to read the file.\n");
        close(fd);
        return;
    }

    Buffer[iRet] = '\0';

    printf("%s", Buffer);

    // Close the file
    close(fd);
}

int main()
{
    char FileName[30];
    int iRet = 0;
    int num = 0;

    printf("Enter the file name : ");
    scanf("%s", FileName);

    printf("Enter Number : ");
    scanf("%d", &num);

    DisplayN(FileName, num);

    return 0;
}