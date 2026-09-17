//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_029
//
//  Description       : Accepts two numbers from the user and
//                      calculates and displays their sum.
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
    int num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1; 

    cout << "Enter the second number: ";
    cin >> num2; 

    sum = num1 + num2; 

    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the first number: 10
//      Enter the second number: 20
//
//  Sample Output :
//      The sum of the two numbers is: 30
//
//////////////////////////////////////////////////////////////////