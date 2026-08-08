/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Given an array arr[] of n integers, construct a Product Array   //
//                     Prod[] (of same size) such that Prod[i] is equal to the product //
//                     of all the elements of arr[] except arr[i]. Solve it without    //
//                     Solve it without division operator and in O(N).                 //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : arr[] : [10, 3, 5, 6, 2]

    Output: prod[] = {180, 600, 360, 300, 900}

*/


import java.util.Scanner;

class ProductArray
{
    public void productArray(int Arr[], int n)
    {
        int Prod[] = new int[n];
        int i = 0, Prefix = 1, Suffix = 1;

        for(i = 0 ; i < n ; i++)
        {
            Prod[i] = Prefix;
            Prefix *= Arr[i];
        }

        for(i = n - 1 ; i >= 0 ; i--)
        {
            Prod[i] = Prod[i] * Suffix;
            Suffix = Suffix * Arr[i];
        }

        for(i = 0 ; i < n ; i++)
        {
            System.out.print(Prod[i] + "\t");
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        ProductArray pobj = new ProductArray();

        int Arr[] = {10, 3, 5, 6, 2};
        int n = Arr.length;

        System.out.println("The Product array is : ");
        pobj.productArray(Arr, n);
    }
}
