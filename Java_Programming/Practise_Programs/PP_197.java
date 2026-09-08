//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_197
//
//  Description       : Demonstrates the use of try-finally block
//                      without using a catch block.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_197
{
    public static void main(String A[])
    {
        try
        {
            System.out.println("Inside try");
        }
        finally
        {
            System.out.println("Inside finally");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Inside try
//      Inside finally
//
//////////////////////////////////////////////////////////////////