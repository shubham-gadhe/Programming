//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_041
//
//  Description       : Accepts n-1 elements from an array containing
//                      numbers from 1 to n and finds the missing number
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements : ";

    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for(int i = 0; i < n - 1; i++)
    {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    cout << "Missing  : " << missingNumber << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the value of n : 5
//
//      Enter 4 elements : 1 2 4 5
//
//  Sample Output :
//      Missing number : 3
//
//////////////////////////////////////////////////////////////////