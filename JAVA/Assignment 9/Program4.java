/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array of characters from user & //
//                     return difference between frequency of capital & frequency of   //
//                     small characters.                                               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : b   N   e   B   R   b   A   I   O   G   i

    Output: 3 (7 - 4)

*/


import java.util.Scanner;

class MyArray
{
    public int Difference(char Arr[])
    {
        int n = Arr.length;
        int i = 0, smallCount = 0, capCount = 0;

        for(i = 0 ; i < n ; i++)
        {
            if(Arr[i] <= 'Z' && Arr[i] >= 'A') smallCount++;
            if(Arr[i] <= 'z' && Arr[i] >= 'a') capCount++;
        }
        return (smallCount - capCount);
    }
}

class Program4
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

        int iRet = 0;

        iRet = mobj.Difference(Arr);

        System.out.println("Difference between frequency of capital & small characters : " + iRet);
    }
}
