//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_132
//
//  Description       : This program accepts a string from the user
//                      and converts lowercase characters into
//                      uppercase characters using ASCII values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/08/2026
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
    //  Description      : Converts the given string into a
    //                      character array and subtracts 32 from
    //                      every character to convert it into
    //                      uppercase.
    //
    //  Issue            : The program subtracts 32 from all
    //                      characters, including uppercase letters,
    //                      digits, spaces and special symbols.
    //
    //////////////////////////////////////////////////////////////////

    public String toUpperX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = (char) (Arr[i] - 32);     // ISSUE
        }

        return new String(Arr);                
    }
}

class PP_132
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
//      The program subtracts 32 from every character instead of
//      checking whether the character is between 'a' and 'z'.
//
//////////////////////////////////////////////////////////////////