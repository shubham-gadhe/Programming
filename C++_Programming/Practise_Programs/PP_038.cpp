//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_038
//
//  Description       : Accepts elements of an array and finds the
//                      frequency of each distinct element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/09/2026
//
//  Time Complexity   : O(n^2)
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

    bool visited[n] = {false};

    cout << "Frequency of elements : " << endl;

    for(int i = 0; i < n; i++)
    {
        if(visited[i])
        {
            continue;
        }

        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements : 6
//
//      Enter 6 elements: 10 20 10 30 20 10
//
//  Sample Output :
//      Frequency of elements :
//      10 -> 3
//      20 -> 2
//      30 -> 1
//
//////////////////////////////////////////////////////////////////