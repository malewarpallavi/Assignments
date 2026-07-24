/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Accept Number from user and display below pattern.              //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input  : 5
    Output : A   B   C   D   E

*/


import java.util.Scanner;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number : ");
        int No = sobj.nextInt();

        Pattern(No);
    }

    public static void Pattern(int No)
    {
        char start = 'A';

        if(No == 0) return;
        if(No < 0) No = -No;

        while(No != 0)
        {
            
        }
    }
}
