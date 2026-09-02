//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_148
//
//  Description       : This program prints a centered
//                      increasing star pattern using nested
//                      for loops. The number of spaces decreases
//                      while the number of stars increases in
//                      each successive row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_148
{
    public static void main(String A[])
    {
        int i, j, k = 0;

        for(i = 1; i <= 5; i++)
        {
            for(j = 1; j <= 5 - i; j++)     // SPACE
            {
                System.out.print(" ");
            }
            for(k = 1; k <= i; k++)     // PRINTING
            {
                System.out.print(" * ");
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
//           *       4
//         * *       3
//       * * *       2
//     * * * *       1
//   * * * * *       0
//
//////////////////////////////////////////////////////////////////