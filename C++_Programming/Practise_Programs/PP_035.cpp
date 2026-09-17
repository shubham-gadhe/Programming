//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_035
//
//  Description       : Accepts a single-word string from the user
//                      and displays the string in reverse order.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string text;

    cout << "Enter a single-word string to reverse: ";
    cin >> text;

    cout << "Reversed string: ";

    for(int i = text.length() - 1; i >= 0; --i) 
    {
        cout << text[i];
    }
    
    cout << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a single-word string to reverse: Hello
//
//  Sample Output :
//      Reversed string: olleH
//
//////////////////////////////////////////////////////////////////