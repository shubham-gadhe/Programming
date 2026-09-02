//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_150
//
//  Description       : This program prints a star pattern using
//                      nested for loops. The pattern starts with
//                      a single star and increases the number of
//                      stars in each successive row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_150
{
    public static void main(String A[])
    {
        int i, j, k = 0;

        for(i = 1; i <= 5; i++)
        {
            for(j = 1; j <= 5 - i; j++)
            {
                System.out.print(" ");
            }
            for(k = 1; k <= i; k++)
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
//          *
//         **
//        ***
//       ****
//      *****
//
//////////////////////////////////////////////////////////////////