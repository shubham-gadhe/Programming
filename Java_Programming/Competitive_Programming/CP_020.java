//////////////////////////////////////////////////////////////////
//
//  File Name    : Find_Smallest_Digit
//
//  Description  : This program accepts a number and
//                 finds the smallest digit present
//                 in the given number.
//
//  Example:
//      Input  : 45872
//      Output : Smallest Digit is : 2
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void findSmallestDigit(int iNum)
    {
        int iDigit = 0, iComp = 0;
        int iNo = iNum;

        while(iNo > 0)  
        {
            iDigit = iNo % 10; 

            if(iComp == 0)
            {
                iComp = iDigit;
            }

            if(iComp > iDigit)  
            {
                iComp = iDigit;  
            }
            iNo = iNo / 10;  
        }
        System.out.println("Largest Digit is : " + iComp);
    }
}

class CP_020
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.findSmallestDigit(45872);
    }
}