//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_202
//
//  Description       : Demonstrates a custom exception by creating
//                      and handling a user-defined InvalidAgeException.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

// Custom Exceptions / User-defined Exception

class InvalidAgeException extends Exception
{
    public InvalidAgeException(String Message)
    {
        super(Message);
    }
}

class PP_202
{
    public static void CheckAge(int Age) throws InvalidAgeException
    {
        if(Age < 18)
        {
            throw new InvalidAgeException("Age must be 18 or above");
        }

        System.out.println("Eligible");
    }
    public static void main(String A[])
    {
        try
        {
            CheckAge(15);
        }
        catch(InvalidAgeException e)
        {
            System.out.println(e.getMessage());
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Age = 15
//
//  Sample Output :
//      Age must be 18 or above
//
//////////////////////////////////////////////////////////////////