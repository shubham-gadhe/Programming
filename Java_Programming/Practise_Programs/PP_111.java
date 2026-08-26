//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_111
//
//  Description       : This program accepts a string from the user,
//                      displays the length of the string, and then
//                      displays each character of the string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_111
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Length of String is : " + Arr.length());

        int i = 0;

        for(i = 0; i < Arr.length(); i++)
        {
            System.out.println(Arr.charAt(i));
        }

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh
//
//  Sample Output :
//
//      Enter String :
//      Length of String is : 6
//      G
//      a
//      n
//      e
//      s
//      h
//
//////////////////////////////////////////////////////////////////