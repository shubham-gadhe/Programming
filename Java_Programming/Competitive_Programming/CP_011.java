//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Leap_Year
//
//  Description  : This program accepts a year and
//                 checks whether the given year is
//                 a leap year or not.
//
//  Example:
//      Input  : 2024
//      Output : Leap Year.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println("Leap Year.");
        }
        else
        {
            System.out.println("Not a Leap year.");
        }
    }
}

class CP_011
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkLeapYear(2024);
    }
}