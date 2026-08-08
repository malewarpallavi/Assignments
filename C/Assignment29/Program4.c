//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write an program which accepts file name & character from user & count number of occurences of that characters from that file.
// Author :      Pallavi Omprakash Malewar
// Date :        24/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt
            'M'

Output :    Frequnecy of M is 7.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountWhiteSpaces(char FName[], char ch)
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

    // Count characters
    for(i = 0 ; i < iRet ; i++)
    {
        if(Buffer[i] == ch)
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
    char ch = '\0';

    printf("Enter the file name : ");
    scanf("%s", FileName);

    printf("Enter Character : ");
    scanf(" %c", &ch);

    iRet = CountWhiteSpaces(FileName, ch);

    if(iRet == -1)
    {
        printf("Unable to access.\n");
        return -1;
    }

    printf("Frequency of %c is %d.\n", ch, iRet);

    return 0;
}