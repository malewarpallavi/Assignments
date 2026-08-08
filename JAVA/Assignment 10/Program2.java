/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java program which accept string from user & print      //
//                     frequency of each word.                                         //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : India is Demo India Hello Demo

    Output: India   2
            is      1
            Demo    2
            Hello   1

*/


import java.util.HashMap;
import java.util.Scanner;

class MyString
{
    public void FrequencyOfWords(String s1)
    {        
        String words[] = s1.split(" ");

        HashMap<String, Integer> map = new HashMap<>();

        for(String word : words)
        {
            if(map.containsKey(word))
            {
                map.put(word, map.get(word) + 1);
            }
            else
            {
                map.put(word, 1);
            }
        }

        for(String key : map.keySet())
        {
            System.out.println(key + " : " + map.get(key));
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter First String : ");
        String s1 = sobj.nextLine();

        MyString mobj = new MyString();

        mobj.FrequencyOfWords(s1);

    }
}
