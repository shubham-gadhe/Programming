//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Palindrome_Number
//
//  Description  : This program accepts a number and checks
//                 whether the given number is a palindrome
//                 or not.
//
//  Example:
//      Input  : 121
//      Output : Given number is Palindrome.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkPalindrome(int iNum)
    {
        int iNo = 0, iDigit = 0;
        int iRev = 0;

        iNo = iNum;    

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            
            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;
        }        
        
        if(iRev == iNum)
        {
            System.out.print("Given number is Palindrome.");
        }
        else
        {
            System.out.print("Given number is not palindrome.");
        }
    }
}

class CP_002
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkPalindrome(121);
    }
}