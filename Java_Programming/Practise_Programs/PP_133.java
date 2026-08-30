//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_133
//
//  Description       : This program accepts a string from the user
//                      and converts all lowercase characters into
//                      uppercase characters using ASCII values and
//                      a user-defined method.
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
    //  Description      : Converts all lowercase characters in the
    //                      given string into uppercase characters
    //                      by subtracting 32 from their ASCII value.
    //
    //////////////////////////////////////////////////////////////////

    public String toUpperX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Arr[i] = (char) (Arr[i] - 32);
            }
        }

        return new String(Arr);     // Return and convert Array to String
    }
}

class PP_133
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
//      Enter String :
//      Updated string is : GANESH 123
//
//////////////////////////////////////////////////////////////////