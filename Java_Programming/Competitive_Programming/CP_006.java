//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Prime_Number
//
//  Description  : This program accepts a number and checks
//                 whether the given number is a prime
//                 number or not.
//
//  Example:
//      Input  : 11
//      Output : Number is Prime Number.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= iNum / 2; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                System.out.print("Number is Not Prime.");
                return;
            }
        } 
        System.out.print("Number is Prime Number.");  
    }   
}

class CP_006
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkPrime(11);
    }
}