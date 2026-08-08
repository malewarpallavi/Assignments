/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java program which accept string & one characeter from  //
//                     user & remove that character from string.                       //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : India is Demo India Hello Demo
            i

    Output: IndasDemoInda   

*/


import java.util.HashMap;
import java.util.Scanner;

class MyString
{
    public String RemoveChar(String s1, char ch)
    {        
        int n = s1.length();
        String result = "";

        for(int i = 0 ; i < n ; i++)
        {
            if(s1.charAt(i) != ch)
            {
                result = result + s1.charAt(i);
            }
        }
        return result;
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter String : ");
        String s1 = sobj.nextLine();

        System.out.print("Enter character to remove : ");
        char ch = sobj.next().charAt(0);

        MyString mobj = new MyString();

        String result = mobj.RemoveChar(s1, ch);

        System.out.println(result);
    }
}
