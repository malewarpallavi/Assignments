/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write Java program which accept array of characters from user & //
//                     accept one character. Return occurence of that character without//
//                     considering case.                                               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 3 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : b   N   e   B   R   b   A   i   G   i
            b

    Output: 3

*/


import java.util.Scanner;

class MyArray
{
    public int Search(char Arr[], char ch)
    {
        int n = Arr.length;
        int i = 0, iCount = 0;

        for(i = 0 ; i < n ; i++)
        {
            if(Arr[i] <= 'Z' && Arr[i] >= 'A') iCount++;
            if(Arr[i] == ch) iCount++;
        }
        return iCount;
    }
}

class Program3
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

        System.out.print("Enter character to find its occurance : ");
        char ch = sobj.next().charAt(0);
 
        MyArray mobj = new MyArray();

        int iRet = 0;

        iRet = mobj.Search(Arr, ch);

        System.out.println("Total Capital Characters : " + iRet);
    }
}
