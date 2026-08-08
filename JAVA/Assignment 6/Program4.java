/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept two arrays from user & form new //
//                     array which is combination of first and second array.           //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*

    Input : 2   9   6   5   2   3
            45  6   12  18  23  4

    Output: 9   5   3
            45  23
*/


import java.util.Scanner;

class MyArray
{
    public int[] ArrayConcate(int Arr[], int Brr[])
    {
        int No1 = Arr.length;
        int No2 = Brr.length;
        int No = No1 + No2;

        int Crr[] = new int[No];

        int i = 0, j = 0;

        for(i = 0 ; i < No1 ; i++)
        {
            Crr[i] = Arr[i];
        }
        int CIdx = i;
        for(j = 0 ; j < No2 ; j++)
        {
            Crr[CIdx] = Brr[j];
            CIdx++;
        }
        return Crr;
    }
}

class Program4
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

        int Crr[] = mobj.ArrayConcate(Arr, Brr);

        System.out.print("Combined Array : ");

        for(int i = 0 ; i < Crr.length ; i++)
        {
            System.out.print(Crr[i] + "\t");
        }
        System.out.println();
    }
}
