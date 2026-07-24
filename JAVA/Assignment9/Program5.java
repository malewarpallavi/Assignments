/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and count         //
//                     frequency of such a digits which are less than 6.               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////



/*

    Input: 2395
    Output : 3

    Input: 1018
    Output : 3

    Input: 9440
    Output : 3

    Input: 96672
    Output : 1

*/


import java.util.Scanner;

class Program5
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
            return 1;
        }

        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < 6)
            {
                Count++;
            }
            No /= 10;
        }
        return Count;
    }
}