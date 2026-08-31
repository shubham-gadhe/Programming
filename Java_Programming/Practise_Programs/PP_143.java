//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_143
//
//  Description       : This program prints a hollow rectangle
//                      pattern using nested for loops. The first
//                      and last rows are completely filled with
//                      stars, while the middle rows contain stars
//                      only at the beginning and end.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_143
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 1; i++)
        {
            for(int j = 1; j <= 5; j++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

        for(int i = 1; i <= 4; i++)
        {
            System.out.print("*");

            for(int j = 1; j <= 3; j++)
            {
                System.out.print(" ");
            }

            System.out.print("*");

            System.out.println();
        }

        for(int i = 1; i <= 1; i++)
        {
            for(int j = 1; j <= 5; j++)
            {
                System.out.print("*");
            }
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      *****
//      *   *
//      *   *
//      *   *
//      *   *
//      *****
//
//////////////////////////////////////////////////////////////////