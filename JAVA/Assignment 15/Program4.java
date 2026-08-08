////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// Problem Statement : Write a java program to merge two files alternatively into third file.     //
// Author : Pallavi Omprakash Malewar                                                             //
// Date : 8 Aug 2026                                                                              //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////


import java.io.*;
import java.util.Scanner;

class Program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Name of File 1 : ");
        String file1 = sobj.nextLine();

        System.out.print("Enter Name of File 2 : ");
        String file2 = sobj.nextLine();

        System.out.print("Enter Name of File 3 : ");
        String file3 = sobj.nextLine();

        BufferedReader br1 = new BufferedReader(new FileReader(file1));
        BufferedReader br2 = new BufferedReader(new FileReader(file2));

        BufferedWriter bw = new BufferedWriter(new FileWriter(file3));

        String str1 = br1.readLine();
        String str2 = br2.readLine();

        while(str1 != null || str2 != null)
        {
            if(str1 != null)
            {
                bw.write(str1);
                bw.newLine();

                str1 = br1.readLine();
            }

            if(str2 != null)
            {
                bw.write(str2);
                bw.newLine();

                str2 = br2.readLine();
            }
        }

        br1.close();
        br2.close();

        bw.close();

        System.out.println("Files Merged Successfully.");
    }
}