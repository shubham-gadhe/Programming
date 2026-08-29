//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_131
//
//  Description       : This program demonstrates character
//                      arithmetic and type casting by converting
//                      the lowercase character 'm' into the
//                      uppercase character 'M' using ASCII values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_131
{
    public static void main(String A[])
    {
        char ch1 = 'm';

        System.out.println(ch1);

        System.out.println((char) (ch1 - 32));       // M
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      m
//      M
//
//////////////////////////////////////////////////////////////////