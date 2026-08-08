/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a java program whihc Fibonacci series.                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 8 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class FibonacciSeries
{
    public int FindFibonacci(int iNo)
    {
        if(iNo < 0) return -1;
        if(iNo == 0) return 0;
        if(iNo == 1 || iNo == 2) return 1;

        int first = 1, second = 1, current = 2; 

        for(int i = 2 ; i < iNo ; i++)
        {
            current = first + second;
            first = second;
            second = current;   
        }
        return current;
    }
}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number for Fibonacci Series : ");
        int no = sobj.nextInt();

        FibonacciSeries fobj = new FibonacciSeries();

        int iRet = fobj.FindFibonacci(no);
        if(iRet == -1)
        {
            System.out.println("Enter Position Integer!");
            return;
        }
        System.out.println(iRet);
    }
}