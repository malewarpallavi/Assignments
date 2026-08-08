/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept two arrays from user & check    //
//                     whether that array & its elements are palindrome or not.        //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 30 Jun 2026                                                                  //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : 2   9   7   7   9   2

    Output: TRUE

    Input : 2   9   7   6   4   5

    Output: FALSE

*/


import java.util.Scanner;

class MyArray
{
    public boolean CopyArrayRev(int Arr[])
    {
        int n = Arr.length;

        int i = 0;
        for(i = 0 ; i < n-1 ; i++)
        {
            if(Arr[i] != Arr[n-i-1]) return false;
        }
        return true;
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
        boolean bRet = false;

        for(int i = 0 ; i < No ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        bRet = mobj.CopyArrayRev(Arr);
        
        if(bRet == true) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}
