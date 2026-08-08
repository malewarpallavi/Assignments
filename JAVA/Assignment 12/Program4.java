/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Equilibrium index of array is an index such that the sum of     //
//                     elements at lower indexes is equal ot the sum of elements at    //
//                     indexes.                                                        //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    A[0] = -7, A[1] = 5, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6] = 0

    3 is an equilibrium index, because:
    A[0] + A[1] + A[2] + A[3] + A[4] + A[5] + A[6] 

    6 is also an equilibrium index, because sum of zero elements is zero,
    i.e., A[0] + A[1] + A[2] + A[3] + A[4] + A[5] = 0

    7 is not an equilibrium(int[] arr, int n); thatgiven a seauence arr[] of size n, 
    returnsan equilibrium index (if any) or -1 if no equilibrium indexes exist.

*/


import java.util.Scanner;

class EquilibriumIndex 
{
    static int equilibrium(int Arr[], int n)
    {
        int leftSum = 0, rightSum = 0, total = 0;

        for(int i = 0 ; i < n ; i++)
        {
            total += Arr[i];
        }

        for(int i = 0 ; i < n ; i++)
        {
            rightSum = total - leftSum - Arr[i];
            if(leftSum == rightSum) return i;
            leftSum += Arr[i];
        }
        return -1;
    }
}

class Program4
{
    public static void main(String A[])
    {
        EquilibriumIndex eobj = new EquilibriumIndex();
        int Arr[] = {-7, 1, 5, 2, -4, 3, 0};
        System.out.println("First equilibrium index is : " + eobj.equilibrium(Arr, Arr.length));
    }
}
