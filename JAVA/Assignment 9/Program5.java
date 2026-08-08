/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array of characters from user & //
//                     display below pattern.                                          //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : 8   9   7   6   4   2   4

    Output: *	*	*	*	*	*	*	*	
            *	*	*	*	*	*	*	*	*	
            *	*	*	*	*	*	*	
            *	*	*	*	*	*	
            *	*	*	*	
            *	*	
            *	*	*	*	

*/


import java.util.Scanner;

class MyArray
{
    public void Pattern(int Arr[])
    {
        int n = Arr.length;
        int i = 0;
        int no = 0;
        for(i = 0 ; i < n ; i++)
        {
            no = Arr[i];
            while(no != 0)
            {
                System.out.print("*\t");
                no--;
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

        System.out.print("Enter the Size of Array : ");
        int No = sobj.nextInt();

        int Arr[] = new int[No];

        for(int i = 0 ; i < No ; i++)
        {
            Arr[i] = sobj.nextInt();
        }
 
        MyArray mobj = new MyArray();

        mobj.Pattern(Arr);
    }
}
