/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
// Problem Statement : Write a Java program which accept string from user & display    //
//                     such a word which occurs maximum number of times.               //
// Author : Pallavi Omprakash Malewar                                                  //
// Date : 4 Aug 2026                                                                   //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////


/*  

    Input : India is Demo India Hello Demo

    Output: India   

*/


import java.util.HashMap;
import java.util.Scanner;

class MyString
{
    public String FrequencyOfWords(String s1)
    {        
        String words[] = s1.split(" ");
        int max = 0;
        String str = "";

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
            if(max < map.get(key)) 
            {
                max = map.get(key);
                str = key;
            }
        }
        return str;
    }
}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter String : ");
        String s1 = sobj.nextLine();

        MyString mobj = new MyString();

        String str = mobj.FrequencyOfWords(s1);

        System.out.println(str);
    }
}
