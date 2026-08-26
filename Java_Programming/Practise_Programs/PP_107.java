//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_107
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

class PP_107
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Entered String : " + Arr);
        
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
//      Entered String : Jay Ganesh
//
//////////////////////////////////////////////////////////////////