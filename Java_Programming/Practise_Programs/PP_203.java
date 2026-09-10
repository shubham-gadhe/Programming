//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_203
//
//  Description       : Demonstrates an unchecked custom exception
//                      by creating a user-defined exception that
//                      extends RuntimeException.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

// Unchecked Custom Exception

class InvalidAmountExcepiton extends RuntimeException
{
    public InvalidAmountExcepiton(String message)
    {
        super(message);
    }
}
class PP_203
{
    public static void main(String A[])
    {
        int Amount = -100;

        if(Amount < 0)
        {
            throw new InvalidAmountExcepiton("Amount cannot be negative");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Amount = -100
//
//  Sample Output :
//      Exception in thread "main" InvalidAmountExcepiton:
//      Amount cannot be negative
//
//////////////////////////////////////////////////////////////////