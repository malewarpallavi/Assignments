/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to print below pattern.                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

            *
          *   *
        *   *   *
      *   *   *   *
    *   *   *   *   *

*/

import java.util.Scanner;

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int n = sobj.nextInt();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                System.out.print("  ");
            }

            for(int j = 0; j <= i; j++)
            {
                System.out.print("*   ");
            }

            System.out.println();
        }

        sobj.close();
    }
}