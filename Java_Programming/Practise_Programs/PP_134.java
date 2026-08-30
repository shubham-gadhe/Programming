//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_134
//
//  Description       : This program accepts a string from the user
//                      and provides two user-defined methods to
//                      convert lowercase characters into uppercase
//                      characters and uppercase characters into
//                      lowercase characters using ASCII values.
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

        return new String(Arr);
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : toLowerX()
    //
    //  Description      : Converts all uppercase characters in the
    //                      given string into lowercase characters
    //                      by adding 32 to their ASCII value.
    //
    //////////////////////////////////////////////////////////////////

    public String toLowerX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char) (Arr[i] + 32);
            }
        }

        return new String(Arr);
    }
}

class PP_134
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

        System.out.println("Uppercase String is : " + sRet);

        sRet = strobj.toLowerX(data);

        System.out.println("Lowercase String is : " + sRet);

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
//      Uppercase String is : GANESH
//      Lowercase String is : ganesh
//
//////////////////////////////////////////////////////////////////