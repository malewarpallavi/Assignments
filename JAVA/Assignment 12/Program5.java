/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Given an array of integers, write a function that returns true  //
//                     if there is a triplet (a, b, c) that satisfies a2 + b2 = c2     //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : Arr[] = {4, 1, 4, 6, 5}
    Output: TRUE
    There is a Pythagorean triplet (3, 4, 5).

    Input : Arr[] = {10, 4, 6, 12, 5}
    Output: FALSE
    There is no Pythagorean triplet (3, 4, 5).

*/


import java.util.*;


class Program5
{
    static boolean isTriplet(int Arr[], int n)
    {
        for(int i = 0 ; i < n ; i++)
        {
            Arr[i] = Arr[i] * Arr[i];
        }

        Arrays.sort(Arr);

        for(int i = n-1 ; i >= 2 ; i++)
        {
            int left = 0;
            int right = i-1;

            while(left < right)
            {
                int sum = Arr[left] + Arr[right];

                if(sum == Arr[i]) return true;

                else if(sum < Arr[i]) left++;
                else right--;
            }
        }

        return false;
    }
    public static void main(String A[])
    {
        int Arr[] = {3, 1, 4, 6, 5};
        int n = Arr.length;

        if(isTriplet(Arr, n) == true)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
}
