//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_043
//
//  Description       : Accepts a string from the user and counts
//                      the number of vowels, consonants, digits,
//                      and spaces present in the string
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string : ";
    getline(cin, text);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for(char ch : text)
    {
        if(isalpha(ch))
        {
            ch = tolower(ch);

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if(isdigit(ch))
        {
            digits++;
        }
        else if(isspace(ch))
        {
            spaces++;
        }
    }

    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;
    cout << "Digits : " << digits << endl;
    cout << "Spaces : " << spaces << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter a string : Hello World 123
//
//  Sample Output :
//      Vowels : 3
//      Consonants : 7
//      Digits : 3
//      Spaces : 2
//
//////////////////////////////////////////////////////////////////