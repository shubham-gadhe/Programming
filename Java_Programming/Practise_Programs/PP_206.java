//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_206
//
//  Description       : This program demonstrates String content
//                      comparison using the equals() method.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_206
{
    public static void main(String A[])
    {
        String Arr = "Hello";
        String Brr = new String("Hello");

        if(Arr.equals(Brr))
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
//      true
//
//////////////////////////////////////////////////////////////////