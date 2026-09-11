//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_207
//
//  Description       : This program demonstrates String immutability
//                      and shows that concat() does not modify the
//                      original String object.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

class PP_207
{
    public static void main(String A[])
    {
        String str = "Java";

        str.concat("Programming");

        System.out.println(str);     
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Java
//
//////////////////////////////////////////////////////////////////