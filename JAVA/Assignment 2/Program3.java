/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and return the    //
//                     count of digits in between 3 & 7.                               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Input: 2395
    Output : 1

    Input: 1018
    Output : 0

    Input: 4521
    Output : 2

    Input: 9922
    Output : 0

*/


import java.util.Scanner;

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();

        int Count = CountOdd(No);

        System.out.println(Count);
    }

    public static int CountOdd(int No)
    {
        if(No == 0) return 0;
        int iCount = 0, iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCount++;
            }
            No /= 10;
        }
        return iCount;
    }
}