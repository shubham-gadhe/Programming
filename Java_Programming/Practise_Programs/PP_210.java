//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_210
//
//  Description       : This program checks whether a given number
//                      is a prime number using a loop up to the
//                      square root of the number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(sqrt(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_210
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Number:");
        int num = scanner.nextInt();

        boolean isPrime = true;

        if(num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for(int i = 2; i <= Math.sqrt(num); i++)
            {
                if(num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime)
        {
            System.out.println(num + " is a Prime Number.");
        }
        else
        {
            System.out.println(num + " is not a Prime Number.");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number: 17
//
//  Sample Output :
//      17 is a Prime Number.
//
//////////////////////////////////////////////////////////////////