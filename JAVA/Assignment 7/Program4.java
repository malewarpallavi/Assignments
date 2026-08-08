/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept one array from user & copy the  //
//                     contents of that array into another array & return new array.   //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 2   9   7   5   2   3

    Output: 2   9   7   5   2   3
*/


import java.util.Scanner;

class MyArray
{
    public int[] CopyArrayRev(int Arr[])
    {
        int n = Arr.length;
        int Brr[] = new int[n];

        for(int i = 0 ; i < n ; i++)
        {
            Brr[i] = Arr[i];
        }
        return Brr;
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Size of Array : ");
        int No1 = sobj.nextInt();

        int Arr[] = new int[No1];
        int Brr[] = new int[No1];

        for(int i = 0 ; i < No1 ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        Brr = mobj.CopyArrayRev(Arr);

        System.out.print("Elements of new Array : ");
        for(int i = 0 ; i < No1 ; i++)
        {
            System.out.print(Brr[i] + "\t");
        }
        System.out.println();
    }
}
