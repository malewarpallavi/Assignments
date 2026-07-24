////////////////////////////////////////////////////////////////////////////////////////////////////
//  
// File name :   Program4.c
// Description : Write an application which accept file name from user & display size of file.
// Author :      Pallavi Omprakash Malewar
// Date :        22/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     Demo.txt

Output :    Displayed all data of file.

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iSize = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    iSize = lseek(fd, 0, SEEK_END);

    printf("Size of file is : %d bytes\n", iSize);
    
    close(fd);
    
    return 0;
}