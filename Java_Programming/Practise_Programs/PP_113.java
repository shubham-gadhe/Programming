//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_113
//
//  Description       : This program accepts a string from the user
//                      and displays the entered string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_113
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        System.out.println("String is : " + str);

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
//      String is : Ganesh
//
//////////////////////////////////////////////////////////////////