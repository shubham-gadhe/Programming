//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_040
//
//  Description       : Accepts a string from the user and checks
//                      whether the string is a palindrome.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string : ";
    cin >> text;

    int start = 0;
    int end = text.length() - 1;

    bool isPalindrome = true;

    while(start < end)
    {
        if(text[start] != text[end])
        {
            isPalindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(isPalindrome)
    {
        cout << "String is a palindrome" << endl;
    }
    else
    {
        cout << "String is not a palindrome" << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a string : madam
//
//  Sample Output :
//      String is a palindrome
//
//////////////////////////////////////////////////////////////////