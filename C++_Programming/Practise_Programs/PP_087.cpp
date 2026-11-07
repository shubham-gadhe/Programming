//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_087
//
//  Description       : Implements Linear Search on a
//                      Dynamically Allocated Integer Array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Time Complexity   : Constructor      - O(n)
//                      Accept()         - O(n)
//                      Display()        - O(n)
//                      LiniearSearch()  - O(n)
//                      Destructor       - O(n)
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
//                      array and provides methods to accept,
//                      display and search array elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
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

        bool LiniearSearch(int iNo);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Searching
//
//  Description       : Initializes the array size and dynamically
//                      allocates memory for the integer array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
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
//  Date              : 07/11/2026
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
//  Date              : 07/11/2026
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
//  Date              : 07/11/2026
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
//  Function Name     : LiniearSearch
//
//  Description       : Searches for the given element in the
//                      array using the linear search technique.
//                      Returns true if the element is found;
//                      otherwise, returns false.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : iNo - Element to be searched.
//  Output            : Returns true if found, otherwise false.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

bool Searching :: LiniearSearch(int iNo)
{
    bool bFlag = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of the Searching class,
//                      accepts and displays array elements, and
//                      searches for the element 30.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : Five integer elements entered by the user.
//  Output            : Displays array elements and search result.
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

    if(sobj.LiniearSearch(30) == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"There is no such element\n";
    }

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
//  Element is present
//
//////////////////////////////////////////////////////////////////