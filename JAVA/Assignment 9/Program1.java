/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array of characters from user & //
//                     replace each capital character with its corresponing small char.//
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : b   N   j   B   R   b   A   d   G   G

    Output: b   n   j   b   r   b   a   d   g   g

*/


import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char Arr[])
    {
        int n = Arr.length;
        int i = 0;

        for(i = 0 ; i < n ; i++)
        {
            if(Arr[i] <= 'Z' && Arr[i] >= 'A')
            {
                Arr[i] = (char)(Arr[i] + ('a' - 'A'));
            }
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

        char Arr[] = new char[No];

        for(int i = 0 ; i < No ; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();

        mobj.ArrayReplace(Arr);

        for(int i = 0 ; i < No ; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
