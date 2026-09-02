//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_145
//
//  Description       : This program prints a left-aligned
//                      increasing star pattern using nested
//                      for loops. The number of stars increases
//                      by one in each successive row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_145
{
    public static void main(String A[])
    {
        int i, j = 0;

        for(i = 1; i <= 5; i++)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print(" *");
            }
            System.out.println();
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
//       *
//       * *
//       * * *
//       * * * *
//       * * * * *
//
//////////////////////////////////////////////////////////////////