//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_177
//
//  Description       : This program displays a right-aligned
//                      triangular pattern using star (*) symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_177
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= 5 - i; j++)
            {
                System.out.print(" ");
            }
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
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
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//
//////////////////////////////////////////////////////////////////