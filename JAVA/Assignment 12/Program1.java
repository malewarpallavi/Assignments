/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java program to find maximum difference between two     //
//                     elements such that larger element appears after smaller number. //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : array : [2, 3, 10, 6, 4, 8, 1]

    Output: 8 (10 - 2)

    Input : array : [7, 9, 5, 6, 3, 2]

    Output: 2 (7 - 9)

*/


import java.util.Scanner;

class MaximumDifference
{
    public int MaxDifference(int Arr[], int size)
    {
        int i = 0, j = 0;
        int Max = 0;
        for(i = 0 ; i < size ; i++)
        {
            for(j = i + 1 ; j < size ; j++)
            {
                int Diff = Arr[j] - Arr[i];
                if((Max < Diff) && (i < j)) Max = Diff;
            }
        }
        return Max;
    }
}

class Program1
{
    public static void main(String A[])
    {
        MaximumDifference mobj = new MaximumDifference();

        int arr[] = {7, 9, 5, 6, 3, 2};

        System.out.println("Maximum Difference is : " + mobj.MaxDifference(arr, arr.length));
    }
}
