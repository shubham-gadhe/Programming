//////////////////////////////////////////////////////////////////
//
//  File Name    : Find_Maximum_Of_Two_Numbers
//
//  Description  : This program accepts two numbers and
//                 displays the greater number.
//
//  Example:
//      Input  : 20, 15
//      Output : Greater Number is : 20
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void findMax(int a, int b)
    {
        if(a < b)
        {
            System.out.print("Greater Number is : " + b);
        }
        else
        {
            System.out.print("Greater Number is : "  + a);
        }
    }
}

class CP_003
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.findMax(20, 15);
    }
}