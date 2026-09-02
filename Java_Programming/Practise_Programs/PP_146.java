//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_146
//
//  Description       : This program prints a left-aligned
//                      decreasing star pattern using nested
//                      for loops. The number of stars decreases
//                      by one in each successive row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_146 
{
    public static void main(String A[])
    {
        int i, j = 0;

        for(i = 1; i <= 5; i++)
        {
            for(j = 6 - i; j >= 1; j--)
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
//
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *
//
//////////////////////////////////////////////////////////////////