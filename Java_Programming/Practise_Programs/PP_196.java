//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_196
//
//  Description       : Demonstrates the use of the finally block,
//                      which executes after the try-catch block.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_196
{
    public static void main(String A[])
    {
        try
        {
            int Arr[] = new int[3];

            Arr[5] = 10;
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array Index exception");
        }
        finally
        {
            System.out.println("Finally block excuted");
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
//      Array Index exception
//      Finally block excuted
//
//////////////////////////////////////////////////////////////////