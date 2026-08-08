/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program which adds two matrices.                   //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Program1
{
    public static void main(String A[])
    {
        int row, col;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number of Rows : ");
        row = sobj.nextInt();

        System.out.print("Enter Number of Columns : ");
        col = sobj.nextInt();


        int a[][] = new int[row][col];

        System.out.println("Enter elements of Matrix A : ");

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print("Element [" + (i + 1) + "," + (j + 1) + "] : ");
                a[i][j] = sobj.nextInt();
            }
        }


        int b[][] = new int[row][col];

        System.out.println("Enter elements of Matrix B : ");

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print("Element [" + (i + 1) + "," + (j + 1) + "] : ");
                b[i][j] = sobj.nextInt();
            }
        }


        int c[][] = new int[row][col];


        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }


        System.out.println("\nMatrix A : ");

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }


        System.out.println("\nMatrix B : ");

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print(b[i][j] + "\t");
            }
            System.out.println();
        }


        System.out.println("\nAddition of Matrix A and Matrix B : ");

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print(c[i][j] + "\t");
            }
            System.out.println();
        }

        sobj.close();
    }
}