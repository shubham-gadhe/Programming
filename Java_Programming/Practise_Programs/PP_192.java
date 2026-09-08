//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_192
//
//  Description       : Demonstrates the flow of try-catch by handling
//                      an exception caused by division by zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_192
{
    public static void main(String A[])
    {
        int x = 10;
        int y = 0;

        try
        {
            int Result =  x / y;
        }
        catch(Exception e)
        {
            System.out.println("Exception Occured : " + e);
        }     
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      x = 10
//      y = 0
//
//  Sample Output :
//      Exception Occured : java.lang.ArithmeticException: / by zero
//
//////////////////////////////////////////////////////////////////