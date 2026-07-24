/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a program which accept number from user and return diff   //
//                     between summation of even digits and summation odd digits.      //
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

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int No = sobj.nextInt();

        int diff = CountDiff(No);

        System.out.println(diff);
    }

    public static int CountDiff(int No)
    {
        int iDigit = 0, EvenSum = 0, OddSum = 0;

        if(No == 0) return 0;
        if(No < 0) No = -No;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit % 2 == 0) EvenSum += iDigit;
            else OddSum += iDigit;

            No /= 10;
        }
        int diff = EvenSum - OddSum;
        return diff;
    }
}