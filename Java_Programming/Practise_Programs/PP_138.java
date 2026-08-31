//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_138
//
//  Description       : This program prints a hollow diamond star
//                      pattern using nested for loops. The pattern
//                      is divided into upper and lower halves and
//                      uses spaces to maintain the diamond shape.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_138
{
    public static void main(String args[])
    {
        for(int i = 5; i >= 1; i--)              
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

        for(int i = 1; i <= 4; i++)              
        {
            for(int j = 1; j <= 4 - i; j++)      
            {
                System.out.print(" ");
            }

            System.out.print("*");              

            for(int j = 1; j <= i * 2 - 1; j++)  
            {
                System.out.print(" ");
            }

            System.out.print("*");              

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
//      *       *
//       *     *
//        *   *
//         * *
//          *
//         * *
//        *   *
//       *     *
//      *       *
//
//////////////////////////////////////////////////////////////////