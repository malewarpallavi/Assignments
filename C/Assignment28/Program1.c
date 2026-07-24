///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program1.c
// Description : Write a application which accept file name from user & open that file in read mode.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    File opened successfully.

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file you want to open : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    printf("File is successfully opened with FD %d\n", fd);
    fflush(stdout);

    return 0;
}