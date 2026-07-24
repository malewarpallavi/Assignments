//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program3.c
// Description : Write an application which accept file name from user & read all data from that file & display contents in screen.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    Displayed all data of file.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

    printf("Enter the name of file you want to open : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    printf("File is Successfully opened with fd : %d\n", fd);

    iRet = read(fd, Buffer, sizeof(Buffer)-1);

    Buffer[iRet] = '\0';

    printf("Data from file is : %s\n", Buffer);

    close(fd);
    
    return 0;
}