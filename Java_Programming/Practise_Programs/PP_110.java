//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_110
//
//  Description       : This program accepts a string from the user
//                      and displays the length of the entered string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_110
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Length of String is : " + Arr.length());

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Jay Ganesh
//
//  Sample Output :
//
//      Enter String :
//      Length of String is : 10
//
//////////////////////////////////////////////////////////////////