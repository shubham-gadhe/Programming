//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_212
//
//  Description       : This program generates the Fibonacci series
//                      for the given number of terms using a loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_212
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Number of terms :");
        int num = scanner.nextInt();

        int a = 0, b = 1;

        System.out.print("Fibonacci Series: "+ a + " " + b);

        for(int i = 2; i < num; i++)
        {
            int next = a + b;

            System.out.print(" " + next);

            a = b;
            b = next;
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number of terms : 7
//
//  Sample Output :
//      Fibonacci Series : 0 1 1 2 3 5 8
//
//////////////////////////////////////////////////////////////////