//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_106
//
//  Description       : This program demonstrates accessing a
//                      non-static function of another class by
//                      creating an object of that class.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

class ArrayX
{
//////////////////////////////////////////////////////////////////
//
//  Function Name     : Update()
//
//  Description       : It is used to update each element of the
//                      array by incrementing its value by 1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//////////////////////////////////////////////////////////////////

    public void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]++;       
        }
    }
}

class PP_106
{
    public static void main(String A[])
    {
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0;

        System.out.println("Array elements before function call : ");

        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        ArrayX aobj = new ArrayX();     
        aobj.Update(Brr);

        System.out.println("Array elements before function call : ");

        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Array elements before function call :
//      10
//      20
//      30
//      40
//      50
//
//      Array elements before function call :
//      11
//      21
//      31
//      41
//      51
//
//////////////////////////////////////////////////////////////////