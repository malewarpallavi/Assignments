//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// File name :   Program4.c                                                                         //
// Description : Program to accept one character and convert case of that character.                //
// Author :      Pallavi Omprakash Malewar                                                          //
// Date :        19/05/2025                                                                         //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input  
        - Read a character from the user.

    Processing
        - If character is between 'A' and 'Z' (i.e., uppercase):
            - Add 32 to convert it to lowercase.
        - Else if character is between 'a' and 'z' (i.e., lowercase):
            - Subtract 32 to convert it to uppercase.
        - If input is not an alphabet, do nothing.

    Output
        - Display the converted character.

    END

*/


#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// Function Name : DisplayConvert                                                //
// Description   : Converts the case of the given alphabet character.            //
//                 - Uppercase letters are converted to lowercase.               //
//                 - Lowercase letters are converted to uppercase.               //
// Input         : char ch  -> the character to be converted                     //
// Output        : Console output of the converted character                     //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", ch - 32);
    }
}

int main()
{
    char cValue = '\0' ;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
    
}
