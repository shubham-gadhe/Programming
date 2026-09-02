//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_149
//
//  Description       : This program prints a right-shifted
//                      decreasing star pattern using nested
//                      for loops. The number of spaces increases
//                      while the number of stars decreases in
//                      each successive row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_149
{
    public static void main(String A[])
    {
        int i, j, k = 0;

        for(i = 1; i <= 5; i++)
        {
            for(k = 1; k < i; k++)
            {
                System.out.print(" ");
            }

            for(j = 6 - i; j >= 1; j--)
            {
                System.out.print("*");
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
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *
//
//////////////////////////////////////////////////////////////////