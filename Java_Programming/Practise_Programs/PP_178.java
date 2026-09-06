//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_178
//
//  Description       : This program displays a hollow square pattern
//                      using star (*) symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_178
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 1; i++)
        {
            for(int j = 1; j <= 20; j++)
            {
                System.out.print("*");
            }
        }
        for(int i = 1; i <= 7; i++)
        {
            System.out.print("*");

            for(int j = 1; j <= 19; j++)
            {
                System.out.print(" ");
            }

            System.out.print("*");

            System.out.println();
        }
        for(int i = 1; i <= 1; i++)
        {
            for(int j = 1; j <= 21; j++)
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
//      ********************
//      *                   *
//      *                   *
//      *                   *
//      *                   *
//      *                   *
//      *                   *
//      *                   *
//      *********************
//
//////////////////////////////////////////////////////////////////