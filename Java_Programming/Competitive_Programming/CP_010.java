//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Number_Sign
//
//  Description  : This program accepts a number and
//                 checks whether the given number is
//                 positive, negative, or zero.
//
//  Example:
//      Input  : -8
//      Output : Number is Negative Number.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkSign(int iNum)
    {
        if(iNum > 0)
        {
            System.out.println("Number is Positive Number.");
        }
        else if(iNum < 0)
        {
            System.out.println("Number is Negative Number.");
        }
        else
        {
            System.out.println("Number is Zero.");
        }    
    }
}

class CP_010
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkSign(-8);
    }
}