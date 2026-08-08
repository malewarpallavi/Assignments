/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accepts no. of rows and columns from   //
//                     user & display below pattern                                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : Hello
    Output: H	e	l	l	o	
            H	e	l	l	
            H	e	l	
            H	e	
            H	
            H	e	
            H	e	l	
            H	e	l	l	
            H	e	l	l	o	

*/


import java.util.Scanner;

class Pattern
{
    public void Pattern(String s)
    {
        int n = s.length();
        int i = 0, j = 0;

        for(i = 0 ; i < n ; i++)
        {
            for(j = 0 ; j < n ; j++)
            {
                if(i >= j)
                {
                    System.out.print(s.charAt(j) + "\t");
                }
            }
            System.out.println();
        }

        for(i = 1 ; i < n ; i++)
        {
            for(j = 0 ; j < n ; j++)
            {
                if((i + j) <= 4)
                {
                    System.out.print(s.charAt(j) + "\t");
                }
            }
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the String : ");
        String s = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.Pattern(s);
    }
}
