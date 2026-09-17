//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_032
//
//  Description       : Demonstrates a class with data members
//                      and a member function to display car details.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
using namespace std;

class Car 
{
    public:
        string brand;
        int year;

        void displayInfo() 
        {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }
};

int main() 
{
    
    Car carObject1;

    carObject1.brand = "Toyota";
    carObject1.year = 2024;
    
    carObject1.displayInfo();

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Brand: Toyota, Year: 2024
//
//////////////////////////////////////////////////////////////////