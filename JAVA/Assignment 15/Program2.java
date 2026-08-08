/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program which multiply two matrices.               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 8 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Program2
{
    static void MultiplyMatrix(int Matrix1[][], int Matrix2[][])
    {
        int row1 = Matrix1.length;
        int col1 = Matrix1[0].length;

        int row2 = Matrix2.length;
        int col2 = Matrix2[0].length;

        int Matrix[][] = new int[row1][col2];

        for(int i = 0 ; i < row1 ; i++)
        {
            for(int j = 0 ; j < col2 ; j++)
            { 
                int k = 0;
                while(k != col1)
                {
                    Matrix[i][j] = Matrix[i][j] + ((Matrix1[i][k]) * (Matrix2[k][j]));
                    k++;
                }
            }
        }

        System.out.println("Given Matrices are : ");

        System.out.println("Matrix 1 : ");

        for(int i = 0 ; i < row1 ; i++)
        {
            for(int j = 0 ; j < col1 ; j++)
            {
                System.out.print(Matrix1[i][j] + "\t");
            }
            System.out.println();
        }
        System.out.println();

        System.out.println("Matrix 1 : ");

        System.out.println();


        for(int i = 0 ; i < row2 ; i++)
        {
            for(int j = 0 ; j < col2 ; j++)
            {
                System.out.print(Matrix2[i][j] + "\t");
            }
            System.out.println();
        }
        System.out.println();

        System.out.println("Multiplication Result of Matrix 1 & Matrix 2");

        for(int i = 0 ; i < row1 ; i++)
        {
            for(int j = 0 ; j < col2 ; j++)
            {
                System.out.print(Matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int row1, col1, row2, col2;

        System.out.print("Enter Number of Rows for Matrix 1 : ");
        row1 = sobj.nextInt();

        System.out.print("Enter Number of Columns for Matrix 1 : ");
        col1 = sobj.nextInt();

        System.out.print("Enter Number of Rows for Matrix 2 : ");
        row2 = sobj.nextInt();

        System.out.print("Enter Number of Columns for Matrix 2 : ");
        col2 = sobj.nextInt();

        if(col1 != row2) 
        {
            System.out.println("Matrix Multiplication can't be done.");
            return;
        }

        int Matrix1[][] = new int[row1][col1];
        int Matrix2[][] = new int[row2][col2];

        for(int i = 0 ; i < row1 ; i++)
        {
            for(int j = 0; j < col1 ; j++)
            {
                System.out.print("Enter Element for Matrix 1 at " + i + " , " + j +" : ");
                Matrix1[i][j] = sobj.nextInt();
            }
            System.out.println();
        }

        for(int i = 0 ; i < row2 ; i++)
        {
            for(int j = 0; j < col2 ; j++)
            {
                System.out.print("Enter Element for Matrix 2 at " + i + " , " + j +" : ");
                Matrix2[i][j] = sobj.nextInt();
            }
            System.out.println();
        }

        MultiplyMatrix(Matrix1, Matrix2);
    }
}