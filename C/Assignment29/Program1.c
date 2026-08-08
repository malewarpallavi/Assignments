////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write an program which accepts file name from user & count number of capital characters from that file.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    Number of capital characters are 23.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
    int fd = 0, i = 0, iRet = 0, iCount = 0;
    char Buffer[1024];

    // Open file in read mode
    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    // Read the data into local array
    iRet = read(fd, Buffer, sizeof(Buffer));

    if(iRet == -1)
    {
        printf("Unable to read the file.\n");
        return -1;
    }

    // Count capital characters
    for(i = 0 ; i < iRet ; i++)
    {
        if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
        {
            iCount++;
        }
    }

    // Close the file
    close(fd);

    // Returns its frequency
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name : ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital characters are %d.\n", iRet);

    return 0;
}