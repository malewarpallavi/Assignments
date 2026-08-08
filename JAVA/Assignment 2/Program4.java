/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and return the    //
//                     multiplication of digits.                                       //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Input: 2395
    Output : 270

    Input: 1018
    Output : 8

    Input: 9440
    Output : 144

    Input: 922432
    Output : 864

*/

import java.util.Scanner;

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();

        int Mult = MultDigits(No);

        System.out.println(Mult);
    }

    public static int MultDigits(int No)
    {
        if(No == 0) return 0;
        if(No < 0) No = -No;
        int iDigit = 0, Mul = 1;

        while(No != 0)
        {
            iDigit = No % 10;
            Mul = Mul * iDigit;
            No /= 10;
        }
        return Mul;
    }
}