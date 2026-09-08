//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_194
//
//  Description       : Demonstrates multiple catch blocks by handling
//                      different types of exceptions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_194
{
    public static void main(String A[])
    {
        try
        {
            int Arr[] = new int[3];

            Arr[5] = 10;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic Exception");
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array Index Exception");
        }
        catch(Exception e)
        {
            System.out.println("General Exception");
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
//      Array Index Exception
//
//////////////////////////////////////////////////////////////////