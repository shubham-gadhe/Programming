//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_039
//
//  Description       : Accepts elements of an array and finds
//                      all duplicate elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
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

    bool foundDuplicate = false;

    cout << "Duplicate elements: ";

    for(int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
        {
            continue;
        }

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break;
            }
        }
    }

    if(!foundDuplicate)
    {
        cout << "No duplicates";
    }

    cout << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements : 7
//
//      Enter 7 elements: 10 20 30 20 40 10 50
//
//  Sample Output :
//      Duplicate elements : 10 20
//
//////////////////////////////////////////////////////////////////