//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_195
//
//  Description       : Demonstrates a multi-catch block by handling
//                      multiple exception types using a single catch block.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_195
{
    public static void main(String A[])
    {
        try
        {
            int Arr[] = new int[3];

            Arr[5] = 10;
        }
        catch(ArithmeticException | ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Exception Occurred");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Array size = 3
//      Arr[5] = 10
//
//  Sample Output :
//      Exception Occurred
//
//////////////////////////////////////////////////////////////////