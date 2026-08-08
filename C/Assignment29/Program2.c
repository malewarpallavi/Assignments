////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write an program which accepts file name from user & count number of small characters from that file.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    Number of small characters are 13.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char FName[])
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

    // Count Small characters
    for(i = 0 ; i < iRet ; i++)
    {
        if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
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

    iRet = CountSmall(FileName);

    if(iRet == -1)
    {
        printf("Unable to access.\n");
        return -1;
    }

    printf("Number of Small characters are %d.\n", iRet);

    return 0;
}