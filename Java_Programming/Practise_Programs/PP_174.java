//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_174
//
//  Description       : This program accepts a number from the user
//                      and displays an inverted right-aligned
//                      triangular pattern using star (*) symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    public static void Display(int iNo)
    {
        int i, j, k = 0;

        for(i = iNo; i >= 1; i--)
        {
            for(j = iNo - i; j >= 1; j--)
            {
                System.out.print(" \t");
            }            
            for(k = 1; k <= i; k++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class PP_174
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number :
//      5
//
//  Sample Output :
//      *   *   *   *   *
//          *   *   *   *
//              *   *   *
//                  *   *
//                      *
//
//////////////////////////////////////////////////////////////////