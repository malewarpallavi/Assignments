/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept two strings from user & check   //
//                     whether first string is rotation of second string or not.       //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : abcdefg  cdefgab

    Output: TRUE

*/


import java.util.Scanner;

class MaximumDifference
{
    public int maxDiff(String s1, String s2)
    {
        
        
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter First String : ");
        String s1 = sobj.nextLine();

        MaximumDifference mobj = new MaximumDifference();

        boolean bRet = mobj.maxDiff(s1, s2);

        if(bRet == true) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}
