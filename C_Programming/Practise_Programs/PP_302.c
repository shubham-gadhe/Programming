//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_302
//
//  Description       : Calculates the addition of all elements
//                      present in an integer array using
//                      recursion and static variables.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//  Note              : n represents the number of elements
//                      present in the array. Recursive calls
//                      require O(n) stack space.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Calculates the sum of all array elements
//                      recursively using static variables to
//                      maintain the current index and sum.
//                      Returns the final sum after recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : Integer array and its size.
//
//  Output            : Returns the sum of all array elements.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int Display(int Arr[], int iSize)
{
    static int i = 0;
    static int iSum = 0;

    if(i < iSize)
    {
        iSum = iSum + Arr[i];
        i++;
        Display(Arr, iSize);
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an integer array, calls
//                      Display() to calculate the sum of its
//                      elements recursively, and displays
//                      the returned result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays the addition of all array elements.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};
    int iRet = 0;

    iRet = Display(Brr, 5);
    printf("Addition is : %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No user input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Addition is : 150
//
//////////////////////////////////////////////////////////////////