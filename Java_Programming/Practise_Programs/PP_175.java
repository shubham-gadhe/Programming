//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_175
//
//  Description       : This program accepts a number from the user
//                      and displays a star pattern with spaces
//                      based on the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public static void Display(int iNo)
    {
        int i, j, k = 0;

        for(i = 1; i <= iNo; i++)
        {
            for(j = 1; j <= iNo - i; j++)     // SPACE
            {
                System.out.print(" \t");
            }
            System.out.print("*\t");

            for(j = i + 1; j <= i; j++)
            {
                if(j % 2 != 0)
                {
                    System.out.print(" \t");
                }               
            }
            System.out.print("*\t");
            System.out.println();
        }
    }
}
class PP_175
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number :
//      5
//
//  Sample Output :
//                  *   *
//              *   *
//          *   *
//      *   *
//  *   *
//
//////////////////////////////////////////////////////////////////