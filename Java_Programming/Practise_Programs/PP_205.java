//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_205
//
//  Description       : This program demonstrates the difference
//                      between String reference comparison using
//                      the == operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_205
{
    public static void main(String A[])
    {
        String Arr = "Hello";
        String Brr = new String("Hello");

        if(Arr == Brr)
        {
            System.out.println("true");
            return;
        }
        
        System.out.println("false");
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      false
//
//////////////////////////////////////////////////////////////////