//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_130
//
//  Description       : This program demonstrates character
//                      arithmetic and type casting by converting
//                      the uppercase character 'A' into the
//                      lowercase character 'a' using ASCII values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_130
{
    public static void main(String A[])
    {
        char ch1 = 'A';

        System.out.println(ch1);

        System.out.println((char) (ch1 + 32));       // a
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      A
//      a
//
//////////////////////////////////////////////////////////////////