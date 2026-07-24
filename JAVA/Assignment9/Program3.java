/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and count         //
//                     frequency of 2.                                                 //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Input: 2395
    Output : 1

    Input: 1018
    Output : 0

    Input: 9000
    Output : 0

    Input: 922432
    Output : 3

*/


import java.util.Scanner;

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();
        
        int freq = CountTwo(No);

        System.out.println(freq);
        
    }

    public static int CountTwo(int No)
    {
        int Digit = 0, Count = 0;

        if(No < 0)
        {
            No = -No;
        }

        if(No == 0)
        {
            return 0;
        }

        while(No != 0)
        {
            Digit = No % 10;
            if(Digit == 2)
            {
                Count++;
            }
            No /= 10;
        }
        return Count;
    }
}