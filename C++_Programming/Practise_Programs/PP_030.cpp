//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_030
//
//  Description       : Accepts an integer from the user and checks
//                      whether the number is even or odd.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << number << " is an even number" << endl;
    } 
    else 
    {
        cout << number << " is an odd number" << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter an integer: 10
//
//  Sample Output :
//      10 is an even number
//
//////////////////////////////////////////////////////////////////