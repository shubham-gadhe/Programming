//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_193
//
//  Description       : Demonstrates exception handling while opening
//                      a file and displays different exception details.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.io.*;

class PP_193
{
    public static void main(String A[])
    {
        try
        {
            FileReader fobj = new FileReader("Demo.txt");
        }
        catch(Exception e)
        {
            System.out.println("Exception Orrcured : " + e);
            System.out.println(e.getMessage());
            System.out.println(e.getStackTrace());
            System.out.println(e.toString());
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      File: Demo.txt
//      File does not exist in the current directory.
//
//  Sample Output :
//      Exception Orrcured : java.io.FileNotFoundException: Demo.txt
//      (Demo.txt details may vary depending on the system path)
//
//      Demo.txt (The system cannot find the file specified)
//
//      [Ljava.lang.StackTraceElement;@...
//
//      java.io.FileNotFoundException: Demo.txt
//
//////////////////////////////////////////////////////////////////