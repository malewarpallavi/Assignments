/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to find transpose of a matrix.             //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

public class Program5
{
    public static void main(String A[])
    {
        int row, col;

        Scanner sobj = new Scanner(System.in);

        // Read number of rows and columns
        System.out.print("Enter Number of Rows : ");
        row = sobj.nextInt();

        System.out.print("Enter Number of Columns : ");
        col = sobj.nextInt();

        // declare two dimensional array (matices)
        int a[][] = new int[row][col];

        // Read elements of Matrix Arr
        System.out.println("Enter elements of matrix A : ");
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                System.out.print("Element [ " + (i + 1) + "," + (j + 1) + " ] ? ");
                a[i][j] = sobj.nextInt();
            }
        }

        // Print matrix A
        System.out.println("Matrix A : ");
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }

        // Print matrix B
        System.out.println("::: Transpose Matrix ::: ");
        for(int i = 0 ; i < col ; i++)
        {
            for(int j = 0 ; j < row ; j++)
            {
                System.out.print(a[j][i] + "\t");
            }
            System.out.println();
        }
    }
}