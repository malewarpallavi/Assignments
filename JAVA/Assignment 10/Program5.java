/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java program which accept expression from user. Check   //
//                     whether the expressions is balanced parenthesis or not.         //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : (a + (f - g) * 2 (a - d))

    Output: TRUE   

    Input : (a + (f - g) * 2 (a - d)

    Output: FALSE   

*/


import java.util.HashMap;
import java.util.Scanner;

class MyString
{
    public boolean CheckParenthesis(String s1)
    {        
        int n = s1.length();
        int iCount = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(iCount < 0) return false;

            if(s1.charAt(i) == '(') iCount++;
            if(s1.charAt(i) == ')') iCount--;
        }
        if(iCount == 0) return true;
        else return false;
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter String : ");
        String s1 = sobj.nextLine();

        MyString mobj = new MyString();

        boolean bRet = mobj.CheckParenthesis(s1);

        if(bRet == true) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}
