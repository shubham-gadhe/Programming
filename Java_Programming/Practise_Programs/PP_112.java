//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_112
//
//  Description       : This program accepts a string from the user,
//                      converts it into a character array using the
//                      toCharArray() method, and displays each
//                      character of the string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_112
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Length of String is : " + Arr.length());

        char str[] = Arr.toCharArray();

        int i = 0;

        for(i = 0; i < str.length; i++)
        {
            System.out.println(str[i]);
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