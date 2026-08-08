/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to print pyramid of characetrs using class.//
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : 5

    Output:                 A
                        A   B   A
                    A   B   C   B   A
                A   B   C   D   C   B   A
            A   B   C   D   E   D   C   B   A
               

*/


import java.util.Scanner;

class Pattern
{
    private int num;

    public void setNum(int num)
    {
        this.num = num;
    }
    public int getNum()
    {
        return this.num;
    }

    public void printAnswer()
    {
        char ch = 'A';
        for(int i = 0 ; i < num ; i++)
        {
            ch = 'A';
            for(int j = 0 ; j < num ; j++)
            {
                if((i+j) >= (num))
                {
                    System.out.print(ch + " ");
                    ch++;
                }
                else
                {
                    System.out.print("  ");
                }
            }
            ch = (char)('A' + i);
            for(int j = 0 ; j < num ; j++)
            {
                if(i >= j)
                {
                    System.out.print(ch + " ");
                    ch--;
                }

            }
            System.out.println();
        }
    }

    public void inputNum()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int num = sobj.nextInt();

        setNum(num);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Pattern pobj = new Pattern();
        pobj.inputNum();
        pobj.printAnswer();
    }
}
