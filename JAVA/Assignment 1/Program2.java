/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and check whether //
//                     it contains 0 in it or not.                                     //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input: 2395
    Output : There is no Zero

    Input: 1018
    Output : It contains Zero

    Input: 9000
    Output : It contains Zero

    Input: 10687
    Output : It contains Zero

*/

import java.util.Scanner;

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number : ");
        int No = sobj.nextInt();

        boolean flag = false;

        if(No == 0)
        {
            flag = true;
        }

        while(No != 0)
        {
            if(No % 10 == 0)
            {
                flag = true;
                break;
            }
            No /= 10;
        }

        if(flag == true) System.out.println("It Contains Zero");
        else System.out.println("There is no Zero");
    }
}