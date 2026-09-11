//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_211
//
//  Description       : This program calculates the factorial of a
//                      given number using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_211
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number : ");
        int num = scanner.nextInt();
        
        long factorial = 1;

        for(int i = 2; i <= num; i++)
        {
            factorial *= i;
        }
        System.out.println("Factorial of " + num + " is : " + factorial);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a number : 5
//
//  Sample Output :
//      Factorial of 5 is : 120
//
//////////////////////////////////////////////////////////////////