//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_198
//
//  Description       : Demonstrates the use of the throw keyword
//                      to explicitly throw an exception.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_198
{
    public static void main(String A[])
    {
        int age = 14;

        if(age < 18)
        {
            throw new ArithmeticException("Age must be 18 or above");
        }

        System.out.println("Eligible");
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      age = 14
//
//  Sample Output :
//      Exception in thread "main" java.lang.ArithmeticException:
//      Age must be 18 or above
//
//////////////////////////////////////////////////////////////////