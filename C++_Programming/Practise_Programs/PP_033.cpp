//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_033
//
//  Description       : Finds and displays the largest number
//                      present in an integer array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main() 
{
    int numbers[5] = {12, 45, 7, 93, 28};
    
    int maxNumber = numbers[0];

    for (int i = 1; i < 5; ++i) 
    {
        if (numbers[i] > maxNumber) 
        {
            maxNumber = numbers[i]; 
        }
    }

    cout << "The largest number in the array is: " << maxNumber << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      The largest number in the array is: 93
//
//////////////////////////////////////////////////////////////////