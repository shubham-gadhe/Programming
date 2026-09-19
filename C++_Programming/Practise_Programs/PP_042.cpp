//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_042
//
//  Description       : Accepts a number from the user and checks
//                      whether the number is prime or not
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/09/2026
//
//  Time Complexity   : O(sqrt(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    bool isPrime = true;

    if(num < 2)
    {
        isPrime = false;
    }
    else
    {
        for(int i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a number : 17
//
//  Sample Output :
//      17 is a prime number
//
//////////////////////////////////////////////////////////////////