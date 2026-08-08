////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// Problem Statement : Write a java program to count teh number of characters in a file.          //
// Author : Pallavi Omprakash Malewar                                                             //
// Date : 8 Aug 2026                                                                              //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////


import java.io.*;

public class Program5
{
    public static void main(String A[]) throws IOException
    {
        File file = new File("Program1.java");

        FileInputStream fileStream = new FileInputStream(file);
        InputStreamReader input = new InputStreamReader(fileStream);
        BufferedReader reader = new BufferedReader(input);

        String line;

        // Initializing Counters
        int CountWord = 0;
        int SentenceCount = 0;
        int CharacterCount = 0;
        int ParagraphCount = 1;
        int WhiteSpaceCount = 0;

        // Logic
        while((line = reader.readLine()) != null)
        {
            // Character Count
            CharacterCount = CharacterCount + line.length();

            // Word Count
            String words[] = line.trim().split("\\s+");

            if(!line.trim().isEmpty())
            {
                CountWord = CountWord + words.length;
            }

            // Sentence Count
            for(int i = 0 ; i < line.length(); i++)
            {
                char ch = line.charAt(i);

                if(ch == '.' || ch == '?' || ch == '!')
                {
                    SentenceCount++;
                }

                //White Space Count
                if(Character.isWhitespace(ch))
                {
                    WhiteSpaceCount++;
                }
            }

            // Paragraph count
            if(!line.trim().isEmpty())
            {
                ParagraphCount++;
            }
        }
        
        System.out.println("Total word count = " + CountWord);
        System.out.println("Total Number of Sentences = " + SentenceCount);
        System.out.println("Total Number of Characters =  " + CharacterCount);
        System.out.println("Number of Paragraphs = " + ParagraphCount);
        System.out.println("Total Number of WhiteSpace = " + WhiteSpaceCount);
    }
}