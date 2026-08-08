/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to reverse each word of string given.      //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////



import java.util.Scanner;
import java.util.Arrays;

class Program3
{
    static String ReversEachWord(String inputStr)
    {
        String Arr[] = inputStr.split(" ");
        int n = Arr.length;
        for(int i = 0 ; i < n ; i++)
        {
            String currWord = Arr[i];

            char Crr[] = currWord.toCharArray();
            int CrrLen = Crr.length;

            for(int j = 0 ; j < CrrLen/2 ; j++)
            {
                char temp = Crr[j];
                Crr[j] = Crr[CrrLen - j - 1];
                Crr[CrrLen - j - 1] = temp;
            }
            currWord = new String(Crr);

            Arr[i] = currWord;
        }

        String newStr = String.join(" ", Arr);
        return newStr;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String 1 : ");
        String str = sobj.nextLine();

        System.out.println("Input String : " + str);
        System.out.println("String with reverse word : " + ReversEachWord(str));
    }
}
