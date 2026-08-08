/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java Program to check given strings are anagram or not. //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 6 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////



import java.util.Scanner;
import java.util.Arrays;

class Program2
{
    static boolean isAnagram(String str1, String str2)
    {
        if(str1.length() != str2.length()) return false;

        char Arr1[] = str1.toCharArray();
        char Arr2[] = str2.toCharArray();

        Arrays.sort(Arr1);
        Arrays.sort(Arr2);

        return Arrays.equals(Arr1, Arr2);
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String 1 : ");
        String str1 = sobj.next();

        System.out.println("Enter String 2 : ");
        String str2 = sobj.next();

        if(isAnagram(str1, str2))
        {
            System.out.println("Anagram Strings !!");
        }
        else
        {
            System.out.println("Strings are not Anagram !!");
        }
    }
}
