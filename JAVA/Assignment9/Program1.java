/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and display its   //
//                     digits in reverse order.                                        //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*  Input  : 2395
    Output : 5
             9
             3
             2

    Input  : 1018
    Output : 8
             1
             0
             1

    Input  : -1018
    Output : 8
             1
             0
             1

    Input  : 9000
    Output : 0
             0
             0
             0
*/

import java.util.Scanner;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();

        int Original = No;

        if(No == 0)
        {
            System.out.println(0);
            return;
        }
        
        if(No < 0)
        {
            No = -No;
        }

        int Digit = 0;

        while(No != 0)
        {
            Digit = No % 10;
            System.out.println(Digit);
            No /= 10;
        }
        No = Original;
    }
}
