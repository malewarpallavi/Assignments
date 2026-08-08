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

    Output: 6
*/


import java.util.Scanner;

class MyArray
{
    public int DiffArray(int Arr[], int Brr[])
    {
        int No1 = Arr.length;
        int No2 = Brr.length;

        int Sum1 = 0;
        int Sum2 = 0;
        
        for(int i = 0 ; i < No1 ; i++)
        {
            Sum1 += Arr[i];
        }
        System.out.println();

        for(int j = 0 ; j < No2 ; j++)
        {
            Sum2 += Brr[j];
        }
        return (Sum1 - Sum2);
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

        int iNo = mobj.DiffArray(Arr, Brr);

        System.out.println("Difference between Summation of Arrays : "+iNo);
    }
}
