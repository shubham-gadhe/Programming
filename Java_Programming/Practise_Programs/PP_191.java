//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_191
//
//  Description       : Demonstrates exception handling by performing
//                      division by zero and generating an exception.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_191
{
    public static void main(String A[])
    {
        int x = 10;
        int y = 0;

        int Result =  x / y;

        System.out.println(Result);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      x = 10
//      y = 0
//
//  Sample Output :
//      Exception in thread "main" java.lang.ArithmeticException:
//      / by zero
//
//////////////////////////////////////////////////////////////////