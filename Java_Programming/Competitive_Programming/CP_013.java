//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Divisibility_By_5_And_11
//
//  Description  : This program accepts a number and
//                 checks whether the given number is
//                 divisible by both 5 and 11.
//
//  Example:
//      Input  : 55
//      Output : Number is Divisible.
//
//      Input  : 50
//      Output : Number is not Divisible.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkDivisible(int iNum)
    {
        if(iNum % 5 == 0 && iNum % 11 == 0)
        {
            System.out.println("Number is Divisible.");
        }
        else
        {
            System.out.println("Number is not Divisible.");
        }
    }
}

class CP_013
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkDivisible(55);
    }
}