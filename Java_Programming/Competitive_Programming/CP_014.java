//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Digits_Using_Recursion
//
//  Description  : This program accepts a number and
//                 displays each digit of the number
//                 using recursion.
//
//  Example:
//      Input  : 9876
//      Output :
//          9
//          8
//          7
//          6
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void printDigits(int iNum)
    {
        if(iNum == 0)
        {
            return;
        }
        printDigits(iNum / 10);

        System.out.println(iNum % 10);
    }
}

class CP_014
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printDigits(9876);
    }
}