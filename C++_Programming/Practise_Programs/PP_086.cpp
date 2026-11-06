//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_086
//
//  Description       : Demonstrates Dynamic Memory Allocation,
//                      Accepting and Displaying Array Elements
//                      using Constructor and Destructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Time Complexity   : Constructor - O(n)
//                      Accept()    - O(n)
//                      Display()   - O(n)
//                      Destructor  - O(n)
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
//                      array and provides methods to accept
//                      and display array elements.
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
        void Accept();
        void Display();
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
//  Function Name     : Accept
//
//  Description       : Accepts integer elements from the user
//                      and stores them in the dynamically
//                      allocated array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Integer elements entered by the user.
//  Output            : Stores the entered elements in the array.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Searching :: Accept()
{
    int i = 0;

    cout<<"Enter the elements\n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements stored in the
//                      dynamically allocated integer array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Displays all array elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Searching :: Display()
{
    int i = 0;

    cout<<"Elements of the Array are : \n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of the Searching class,
//                      accepts five integer elements and displays
//                      the stored array elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Five integer elements entered by the user.
//  Output            : Displays the entered array elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  10 20 30 40 50
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Enter the elements
//  Elements of the Array are :
//  10
//  20
//  30
//  40
//  50
//
//////////////////////////////////////////////////////////////////