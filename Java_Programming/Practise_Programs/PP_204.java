//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_204
//
//  Description       : Demonstrates try-with-resources for automatic
//                      resource management while reading a file.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

// Try-with-Resources

import java.io.*;

class PP_204
{
    public static void main(String A[])
    {
        try(BufferedReader br = new BufferedReader(new FileReader("Demo.txt")))
        {
            String str;

            while((str = br.readLine()) != null)
            {
                System.out.println(str);
            }
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      File: Demo.txt
//
//  Sample Output :
//      Contents of Demo.txt are displayed line by line.
//
//////////////////////////////////////////////////////////////////