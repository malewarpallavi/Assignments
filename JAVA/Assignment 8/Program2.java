/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array from user & replace each  //
//                     member with summation of its digit.                             //
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
    public void SumArray(int Arr[])
    {
        int n = Arr.length;
        int i = 0;

        for(i = 0 ; i < n ; i++)
        {
            int Sum = 0;
            int No = Arr[i];

            while(No != 0)
            {
                Sum += (No % 10);
                No /= 10;
            }
            System.out.print(Sum + "\t");
        }
        System.out.println();
    }
}

class Program2
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

        mobj.SumArray(Arr);
    }
}
