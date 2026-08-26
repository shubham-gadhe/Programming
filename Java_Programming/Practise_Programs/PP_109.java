//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_109
//
//  Description       : This program accepts a string from the user
//                      and displays its first three characters using
//                      the charAt() method.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_109
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println(Arr.charAt(0));
        System.out.println(Arr.charAt(1));
        System.out.println(Arr.charAt(2));

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
//      G
//      a
//      n
//
//////////////////////////////////////////////////////////////////