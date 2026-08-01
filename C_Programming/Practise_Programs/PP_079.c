/*
==============================================================================
 File Name   : PP_079.c

 Program     : Summation of Array Elements

 Description : Demonstrates the use of a Variable Length Array (VLA). The
               program accepts array elements from the user, calculates the
               summation of all elements, and displays the result.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>   

/*
==============================================================================
 Function Name : Summation

 Description   : Traverses the array and calculates the summation of all
                 its elements.

 Input         : Integer array, Size of the array
 Output        : Integer
==============================================================================
*/

int Summation(int Arr[], int iSize)
{  

    int iCnt = 0;
    int iSum = 0;
    
    // Traverse the array and calculate the summation
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
    int iLength = 4;
    int iCnt = 0;
    int iRet = 0;
    
    // Declare a Variable Length Array (VLA)
    int Brr[iLength]; 
    
    // Accept array elements from the user
    printf("Enter the elements : \n");    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
     
    // Calculate the summation of all array elements
    iRet = Summation(Brr, iLength);  
    
    // Display the result
    printf("Addition of all elements : %d\n", iRet);
    
    return 0;  
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
10
20
30
40

 Sample Output
------------------------------------------------------------------------------
Addition of all elements : 100
==============================================================================
*/