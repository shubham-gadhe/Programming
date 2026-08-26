//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_114
//
//  Description       : This program demonstrates the default
//                      initialization of a String object, accepts a
//                      string from the user, displays the string,
//                      and displays its length.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_114
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = new String();

        System.out.println(str.length());

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        System.out.println("String is : " + str);

        System.out.println(str.length());

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
//      0
//      Enter String :
//      String is : Ganesh
//      6
//
//////////////////////////////////////////////////////////////////