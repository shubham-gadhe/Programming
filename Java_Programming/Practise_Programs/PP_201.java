//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_201
//
//  Description       : Demonstrates exception propagation through
//                      multiple methods and handles the exception
//                      using try-catch-finally.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

// Exception Propagation with Methods

class PP_201
{
    public static void Method3()
    {   
        int Result = 10/0;
    }

    public static void Method2()
    {
        Method3();
    }

    public static void Method1()
    {
        Method2();
    }

    public static void main(String A[])
    {
        try
        {
            Method1();
        }
        catch(ArithmeticException e)
        {
            System.out.println("Exception Occurs");
        }
        finally
        {
            System.out.println("Execution get handled");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Exception Occurs
//      Execution get handled
//
//////////////////////////////////////////////////////////////////