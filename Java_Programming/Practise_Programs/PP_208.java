//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_208
//
//  Description       : This program demonstrates String immutability
//                      and shows that concat() returns a new String
//                      which is assigned back to the original variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

class PP_208
{
    public static void main(String A[])
    {
        String str = "Java";

        str = str.concat(" Programming");

        System.out.println(str);     
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Java Programming
//
//////////////////////////////////////////////////////////////////