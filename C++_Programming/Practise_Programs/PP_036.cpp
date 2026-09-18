//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_036
//
//  Description       : Accepts elements of an array and finds the
//                      second largest distinct element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <climits>
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

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
    {
        cout << "Second largest element does not exist" << endl;
    }
    else
    {
        cout << "Second largest element : " << secondLargest << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements : 5
//
//      Enter 5 elements : 10 40 25 40 15
//
//  Sample Output :
//      Second largest element : 25
//
//////////////////////////////////////////////////////////////////