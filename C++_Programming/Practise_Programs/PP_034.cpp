//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_034
//
//  Description       : Accepts a number from the user and calculates
//                      its square using a separate function.
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

int calculateSquare(int num) 
{
    return num * num;
}

int main() 
{
    int inputNumber;

    cout << "Enter a number to find its square: ";
    cin >> inputNumber;

    int result = calculateSquare(inputNumber);

    cout << "The square of " << inputNumber << " is: " << result << endl;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a number to find its square: 5
//
//  Sample Output :
//      The square of 5 is: 25
//
//////////////////////////////////////////////////////////////////