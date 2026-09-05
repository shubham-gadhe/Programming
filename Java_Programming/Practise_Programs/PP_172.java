//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_172
//
//  Description       : This program accepts a number from the user
//                      and displays an inverted right-angled triangular
//                      pattern using star (*) symbols.
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
        int i, j = 0;

        for(i = 1; i <= iNo; i++)
        {
            for(j = i; j <= iNo; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class PP_172
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
//      *   *   *   *
//      *   *   *
//      *   *
//      *
//
//////////////////////////////////////////////////////////////////