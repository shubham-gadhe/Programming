//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_002
//
//  Description  : This program accepts the user's name, age
//                 and marks from the user and displays the
//                 entered information on the screen.
//
//  Example:
//      Input  : Name  - Amit
//               Age   - 22
//               Marks - 85.5
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_002
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.println("Enter your Name : ");
        sName = sobj.nextLine();

        System.out.println("Enter your Age : ");
        iAge = sobj.nextInt();

        System.out.println("Enter your Marks : ");
        fMarks = sobj.nextFloat();

        System.out.println("Name : " + sName);
        System.out.println("Age : " + iAge);
        System.out.println("Marks : " + fMarks);
    }
}