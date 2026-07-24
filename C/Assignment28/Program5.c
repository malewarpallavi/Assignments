////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program5.c
// Description : Write an application which accept file name & one string from user. Write the string at the end of the file.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt
            Hello World

Output :    Write Hello World at the end of Demo.txt file

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[100] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%s", Fname);

    printf("Enter the string : ");
    scanf(" %[^\n]", Buffer);

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    iRet = write(fd, Buffer, strlen(Buffer));

    printf("%d bytes written successfully\n", iRet);
    close(fd);
    
    return 0;
}