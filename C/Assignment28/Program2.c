///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program2.c
// Description : Write an appication which accept file name from user & create that file.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    File created successfully.

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

    printf("Enter the name of file you want to create : ");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is Successfully created with fd : %d\n", fd);
        close(fd);
    }
    return 0;
}