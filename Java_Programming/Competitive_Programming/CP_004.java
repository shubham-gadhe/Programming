//////////////////////////////////////////////////////////////////
//
//  File Name    : Find_Minimum_Of_Three_Numbers
//
//  Description  : This program accepts three numbers and
//                 displays the smallest number.
//
//  Example:
//      Input  : 3, 7, 2
//      Output : Smallest Number is : 2
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void findMin(int a, int b, int c)
    {
        if((a < b) && (a < c))
        {
            System.out.print("Smallest Number is : " + a);
        }
        else if((b < a) && (b < c))
        {
            System.out.print("Smallest Number is : " + b);
        }
        else if((c < a) && (c < b))
        {
            System.out.print("Smallest Number is : " + c);
        }
    }
}

class CP_004
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.findMin(3,7,2);
    }
}