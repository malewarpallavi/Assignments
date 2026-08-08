/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept marks of N students from user & //
//                     display class of each student.                                  //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

/*

    Less than 35 -  Fail
    Less than 50 -  Pass Class
    Less than 60 -  Second Class
    Less than 70 -  First Class
    Greater than 70 - First Class with Distinction

*/

/*  

    Input : 67.3    45.8    88.9    77.5    55.2

    Output: 67.3    First Class
            45.8    Pass Class
            88.9    First Class with Distinction
            77.5    First Class with Distinction
            55.2    Second Class

*/


import java.util.Scanner;

class MyArray
{
    public void Percentage(float Arr[])
    {
        int n = Arr.length;
        int i = 0;

        for(i = 0 ; i < n ; i++)
        {
            float no = Arr[i];
            if(no < 35) System.out.println("Fail");
            else if(no < 50) System.out.println("Pass Class");
            else if(no < 60) System.out.println("Second Class");
            else if(no < 70) System.out.println("First Class");
            else System.out.println("First Class with Distinction");
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Size of Array : ");
        int No = sobj.nextInt();

        float Arr[] = new float[No];

        for(int i = 0 ; i < No ; i++)
        {
            Arr[i] = sobj.nextFloat();
        }

        MyArray mobj = new MyArray();

        mobj.Percentage(Arr);
    }
}
