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

class MyString
{
    public boolean CheckRotation(String s1, String s2)
    {
        int n1 = s1.length();
        int n2 = s2.length();

        if(n1 != n2) return false;

        String temp = s1 + s1;

        return temp.contains(s2);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter First String : ");
        String s1 = sobj.nextLine();

        System.out.print("Enter Second String : ");
        String s2 = sobj.nextLine();

        MyString mobj = new MyString();

        boolean bRet = mobj.CheckRotation(s1, s2);

        if(bRet == true) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}
