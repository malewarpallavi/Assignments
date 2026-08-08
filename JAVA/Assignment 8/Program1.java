/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array from user & reverse each  //
//                     number of that array.                                           //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : 89  687 56  549 87  9

    Output: 98  786 65  945 78  9 

*/


import java.util.Scanner;

class MyArray
{
    public void ReverseArray(int Arr[])
    {
        int n = Arr.length;
        int i = 0;

        for(i = 0 ; i < n/2 ; i++)
        {
            int temp = Arr[i];
            Arr[i] = Arr[n-i-1];
            Arr[n-i-1] = temp;
        }
    }
}

class Program1
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

        mobj.ReverseArray(Arr);

        for(int i = 0 ; i < No ; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
    }
}
