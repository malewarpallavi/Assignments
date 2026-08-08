/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and return the    //
//                     count of odd digits.                                            //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Input: 2395
    Output : 3

    Input: 1018
    Output : 2

    Input: -1018
    Output : 2

    Input: 8462
    Output : 0

*/


import java.util.Scanner;

class Program2
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
        int iCount = 0;

        while(No != 0)
        {
            if((No % 10) % 2 != 0)
            {
                iCount++;
            }
            No /= 10;
        }
        return iCount;
    }
}