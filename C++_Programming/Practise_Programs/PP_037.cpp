//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_037
//
//  Description       : Accepts elements of an array and checks
//                      whether the array is sorted in ascending order.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/09/2026
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

    cout << "Enter the number of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements : ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isSorted = true;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
    {
        cout << "Array is sorted in ascending order" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements : 5
//
//      Enter 5 elements: 10 20 30 40 50
//
//  Sample Output :
//      Array is sorted in ascending order
//
//////////////////////////////////////////////////////////////////