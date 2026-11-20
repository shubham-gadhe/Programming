//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_301
//
//  Description       : Calculates the addition of all elements
//                      present in an integer array using a
//                      while loop and returns the sum.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//  Note              : n represents the number of elements
//                      present in the array.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Accepts an integer array and its size,
//                      calculates the sum of all array elements
//                      using a while loop, and returns the sum.
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
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Display(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    while(i < iSize)
    {
        iSum = iSum + Arr[i];
        i++;
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an integer array, calls
//                      Display() to calculate the sum of its
//                      elements, and displays the result.
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