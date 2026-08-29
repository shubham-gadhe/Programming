//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_128
//
//  Description       : This program accepts a string from the user
//                      and converts all lowercase characters into
//                      uppercase characters using a user-defined
//                      method.
//
//                      The program contains an error because 32 is
//                      subtracted from every character without
//                      checking whether the character is lowercase.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : toUpperX()
    //
    //  Description      : Converts lowercase characters into
    //                      uppercase characters by subtracting
    //                      32 from their ASCII value.
    //
    //////////////////////////////////////////////////////////////////

    public String toUpperX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = Arr[i] - 32;      // ERROR
        }

        return new String(Arr);        
    }
}

class PP_128
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);

        System.out.println("Updated string is : " + sRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh 123
//
//  Sample Output :
//
//      Incorrect Output
//
//      Reason:
//      The program subtracts 32 from every character, including
//      uppercase letters, digits, spaces and special symbols.
//
//////////////////////////////////////////////////////////////////