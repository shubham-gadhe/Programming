//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_124
//
//  Description       : This program defines a user-defined class
//                      named PP_124 inside the Marvellous package.
//                      It provides methods to count capital
//                      characters, small characters, digits, spaces,
//                      and special symbols from a given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

package Marvellous;

public class PP_124
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountCapital()
    //
    //  Description      : Counts the number of capital characters
    //                      present in the given string.
    //
    //////////////////////////////////////////////////////////////////

    public int CountCapital(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountSmall()
    //
    //  Description      : Counts the number of small characters
    //                      present in the given string.
    //
    //////////////////////////////////////////////////////////////////

    public int CountSmall(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountDigits()
    //
    //  Description      : Counts the number of digits present in
    //                      the given string.
    //
    //////////////////////////////////////////////////////////////////

    public int CountDigits(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= '0' && Arr[i] <= '9')
            {
                iCount++;
            }
        }

        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountSpace()
    //
    //  Description      : Counts the number of spaces present in
    //                      the given string.
    //
    //////////////////////////////////////////////////////////////////

    public int CountSpace(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }

        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountSpecial()
    //
    //  Description      : Counts the number of special symbols
    //                      present in the given string.
    //
    //////////////////////////////////////////////////////////////////

    public int CountSpecial(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= '!' && Arr[i] <= '/') ||
               (Arr[i] >= ':' && Arr[i] <= '@') ||
               (Arr[i] >= '[' && Arr[i] <= '`') ||
               (Arr[i] >= '{' && Arr[i] <= '~'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Note:
//
//      Package name : Marvellous
//      Class name   : PP_124
//      File name    : PP_124.java
//
//////////////////////////////////////////////////////////////////