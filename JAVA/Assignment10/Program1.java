/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and return the    //
//                     count of even digits.                                           //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Input: 2395
    Output : 1

    Input: 1018
    Output : 2

    Input: -1018
    Output : 2

    Input: 8462
    Output : 4

*/


import java.util.Scanner;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();

        int Count = CountEven(No);

        System.out.println(Count);
    }

    public static int CountEven(int No)
    {
        if(No == 0) return 1;
        int iCount = 0;

        while(No != 0)
        {
            if((No % 10) % 2 == 0)
            {
                iCount++;
            }
            No /= 10;
        }
        return iCount;
    }
}