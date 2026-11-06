//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_086
//
//  Description       : Demonstrates Dynamic Memory Allocation
//                      and Deallocation using Constructor
//                      and Destructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Time Complexity   : Constructor - O(n)
//                      Destructor - O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
//
//  Class Name        : Searching
//
//  Description       : Manages a dynamically allocated integer
//                      array using a constructor and destructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

class Searching
{
    private:
        int *Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Searching
//
//  Description       : Initializes the array size and dynamically
//                      allocates memory for the integer array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo - Number of elements in the array.
//  Output            : Allocates memory dynamically.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : ~Searching
//
//  Description       : Releases the dynamically allocated memory
//                      of the integer array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Deallocates the allocated memory.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

Searching :: ~Searching()
{
    delete []Arr;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of the Searching class
//                      with memory allocated for five integers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : No input required.
//  Output            : Creates and destroys the Searching object.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Searching sobj(5);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  No output generated.
//
//////////////////////////////////////////////////////////////////