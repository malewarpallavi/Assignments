/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to print below pattern.                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    *   *   *   *   *   *   *   *   *   *   
    *   *   *   *       *   *   *   *       
    *   *   *           *   *   *           
    *   *               *   *               
    *                   *       
    *                   *   
    *   *               *   *   
    *   *   *           *   *   *   
    *   *   *   *       *   *   *   *   
    *   *   *   *   *   *   *   *   *   *  


*/



import java.util.Scanner;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int n = sobj.nextInt();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if((i + j) < n)
                {
                    System.out.print("*   ");
                }
                else
                {
                    System.out.print("    ");
                }
            }

            for(int j = 0; j < n; j++)
            {
                if((i + j) < n)
                {
                    System.out.print("*   ");
                }
                else
                {
                    System.out.print("    ");
                }
            }
            System.out.println();
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(j <= i)
                {
                    System.out.print("*   ");
                }
                else
                {
                    System.out.print("    ");
                }
            }

            for(int j = 0; j < n; j++)
            {
                if(j <= i)
                {
                    System.out.print("*   ");
                }
            }
            System.out.println();
        }
        sobj.close();
    }
}