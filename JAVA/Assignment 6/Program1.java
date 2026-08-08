/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept two arrays from user & display  //
//                     contents of each array                                          //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 2   9   7   5   2   3
            9   3   5   5

    Output: 2   9   7   5   2   3
            9   3   5   5
*/


import java.util.Scanner;

class MyArray
{
    public void Display(int Arr[], int Brr[])
    {
        int No1 = Arr.length;
        int No2 = Brr.length;
        
        for(int i = 0 ; i < No1 ; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();

        for(int j = 0 ; j < No2 ; j++)
        {
            System.out.print(Brr[j] + "\t");
        }
        System.out.println();
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Size of Array 1 : ");
        int No1 = sobj.nextInt();

        int Arr[] = new int[No1];

        System.out.print("Enter the Size of Array 2 : ");
        int No2 = sobj.nextInt();

        int Brr[] = new int[No2];

        for(int i = 0 ; i < No1 ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        for(int j = 0 ; j < No2 ; j++)
        {
            Brr[j] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        mobj.Display(Arr, Brr);
    }
}
