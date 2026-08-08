/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accepts no. of rows and columns from   //
//                     user & display below pattern                                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input  : iRow = 3       iCol = 5
    Output : A   A   A   A   A
             B   B   B   B   B
             C   C   C   C   C


*/


import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 0 ; i < iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                System.out.print(ch + "\t");
            }
            System.out.println();
            ch++;
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the length of Row : ");
        int No1 = sobj.nextInt();

        System.out.print("Enter the length of column : ");
        int No2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(No1, No2);
    }
}
