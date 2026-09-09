//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_200
//
//  Description       : Demonstrates exception propagation where an
//                      exception raised in one method propagates to
//                      the calling method.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_200
{
    public static void fun()
    {
        int iNo = 10 / 0;
    }
    
    public static void main(String A[])
    {      
        fun();   
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Exception in thread "main" java.lang.ArithmeticException:
//      / by zero
//
//      at PP_200.fun(PP_200.java:...)
//      at PP_200.main(PP_200.java:...)
//
//////////////////////////////////////////////////////////////////