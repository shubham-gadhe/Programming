//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Digits_In_Reverse_Order
//
//  Description  : This program accepts a number and
//                 displays its digits in reverse
//                 order.
//
//  Example:
//      Input  : 1234
//      Output :
//          4
//          3
//          2
//          1
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void printReverse(int iNum)
    {
        int iRev = 0;

        while(iNum > 0)
        {
            iRev = iNum % 10;
            System.out.println(iRev);
            iNum = iNum / 10;
        }
    }
}

class CP_017
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printReverse(10);
    }
}