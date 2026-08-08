/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to read & add two distances using class.   //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    In this Java Program, we will read two distances in feet and inches and find their 
    sum, here program is implementing  using class and objects concept.

    Given program is used to read two distances (in feet and inches) and print their
    sum in feet and inches, note that if total inches are more than 12 then it would be
    consider as 1 feet.

*/

/*

    Input:  Enter First Distance:
            Enter Feet: 20
            Enter Inches: 10

            Enter Second Distance:
            Enter Feet: 20
            Enter Inches: 10

    Output: Total Distance is:
            Feet: 41    Inches: 4

*/


import java.util.Scanner;
import java.util.Arrays;

class Program4
{
    static void CalculateDistance(int feet1, int inch1, int feet2, int inch2)
    {
        int Feet = 0;
        int Inches = 0;

        Feet = feet1 + feet2;
        Inches = inch1 + inch2;

        if((Inches % 12) > 0)
        {
            int newFeet = Inches/12;
            Feet += newFeet;
            Inches = Inches % 12;
        }

        System.out.println("Total Distance \t Feet : " + Feet + "\t Inches : " + Inches);
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Distance");
        System.out.print("Enter Feet : ");
        int feet1 = sobj.nextInt();

        System.out.print("Enter Inches : ");
        int inch1 = sobj.nextInt();

        System.out.println("Enter Second Distance : ");
        System.out.print("Enter Feet : ");
        int feet2 = sobj.nextInt();

        System.out.print("Enter Inches : ");
        int inch2 = sobj.nextInt();

        CalculateDistance(feet1, inch1, feet2, inch2);

    }
}
