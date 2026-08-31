//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_142
//
//  Description       : This program prints a hollow triangular
//                      star pattern with a solid base using nested
//                      for loops. The upper part contains boundary
//                      stars with spaces between them, while the
//                      last line is completely filled with stars.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_142
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 4; i++)              
        {
            for(int j = 1; j <= 5 - i; j++)      
            {
                System.out.print(" ");
            }

            System.out.print("*");              

            for(int j = 1; j <= i * 2 - 3; j++)  
            {
                System.out.print(" ");
            }

            if(i != 1)                           
            {
                System.out.print("*");
            }

            System.out.println();
        }

        for(int i = 1; i <= 1; i++)              
        {
            for(int j = 1; j <= 9; j++)           
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
//          *
//         * *
//        *   *
//       *     *
//      *********
//
//////////////////////////////////////////////////////////////////