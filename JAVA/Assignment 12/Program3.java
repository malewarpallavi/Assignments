/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Given an array arr[], write the function that segregates even & //
//                     odd numbers. The function should put all even nmbers first, and //
//                     then odd numbers.                                               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : arr[] : [12, 34, 45, 8, 90, 3]

    Output: prod[] = [12, 34, 8, 90, 45, 9, 3]

*/


import java.util.Scanner;

class Program3
{
    public static void main(String A[])
    {
        int Arr[] = {12, 34, 45, 9, 8, 90, 3};

        segregateEvenOdd(Arr);
        System.out.println("Array after segregation is : ");

        for(int i = 0 ; i < Arr.length ; i++)
        {
            System.out.print(Arr[i] + " ");
        }
    }
    static void segregateEvenOdd(int Arr[])
    {
        int i = 0, j = Arr.length - 1;

        while(i < j)
        {
            if(Arr[i] % 2 == 0)
            {
                i++;
            }

            else if(Arr[j] % 2 != 0)
            {
                j--;
            }

            else
            {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;

                i++;
                j--;
            }
        }
    }
}
