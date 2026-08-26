//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_116
//
//  Description       : This program accepts a string from the user
//                      and passes it to a user-defined class method
//                      to display the received string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
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
    //  Method Name      : Display()
    //
    //  Description      : It is used to display the string received
    //                     as a parameter.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 26/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public void Display(String str)
    {
        System.out.println("Received String is : " + str);
    }
}

class PP_116
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX();

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        strobj.Display(data);

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
//      Received String is : Ganesh
//
//////////////////////////////////////////////////////////////////