/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accepts no. of rows and columns from   //
//                     user & display below pattern                                    //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : iRow = 4       iCol = 3
    Output: 1   2   3
            1   2   3
            1   2   3
            1   2   3 

*/


import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0 ; i < iRow ; i++)
        {
            int iNo = 1;
            for(j = 0 ; j < iCol ; j++)
            {
                System.out.print(iNo + "\t");
                iNo++;
            }
            System.out.println();
        }
    }
}

class Program2
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
