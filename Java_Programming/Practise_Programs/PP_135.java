//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_135
//
//  Description       : This program accepts a string from the user
//                      and provides three user-defined methods to
//                      convert the string into uppercase, lowercase,
//                      and toggle the case of each alphabet character
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
    //                      using ASCII values.
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
    //                      using ASCII values.
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

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : Toggle()
    //
    //  Description      : Toggles the case of each alphabet
    //                      character in the given string.
    //
    //  Issue            : The else block executes for every character
    //                      that is not uppercase, including lowercase
    //                      characters, digits, spaces and special
    //                      characters.
    //
    //////////////////////////////////////////////////////////////////

    public String Toggle(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char) (Arr[i] + 32);
            }
            else        // ISSUE
            {
                Arr[i] = (char) (Arr[i] - 32);
            }
        }

        return new String(Arr);
    }
}

class PP_135
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

        sRet = strobj.Toggle(data);

        System.out.println("Toggled String is : " + sRet);

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
//      Uppercase String is : GANESH 123
//      Lowercase String is : ganesh 123
//      Toggled String is : gANESH
//
//      Note:
//      Toggle() produces incorrect results for spaces, digits and
//      special characters because of the else condition.
//
//////////////////////////////////////////////////////////////////