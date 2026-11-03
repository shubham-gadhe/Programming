//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_072
//
//  Description       : Implements a Stack using a Singly Linear
//                      Linked List with push, pop, peep, display,
//                      and count operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Time Complexity   : Push()    - O(1)
//                      Pop()     - O(1)
//                      Peep()    - O(1)
//                      Display() - O(n)
//                      Count()   - O(1)
//
//  Space Complexity  : O(n), where n is the number of nodes.
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of the Stack containing
//                      data and a pointer to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

struct node
{
    int data; 
    struct node *next;
};

//////////////////////////////////////////////////////////////////
//
//  Class Name        : Stack
//
//  Description       : Provides member functions to perform
//                      push, pop, peep, display, and count
//                      operations using a linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

class Stack
{
    private:
        struct node* first;
        int iCount;

    public:
        Stack();
        void Push(int iNo);         
        int Pop();                  
        int Peep();                 
        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Stack
//
//  Description       : Initializes the first pointer to NULL
//                      and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Initializes the Stack object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

Stack :: Stack()
{

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Push
//
//  Description       : Inserts a new element at the top of
//                      the Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Integer value to be inserted.
//  Output            : Adds a new element to the Stack.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Stack :: Push(int iNo)    
{

}   

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Pop
//
//  Description       : Removes and returns the top element
//                      from the Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Returns the removed top element.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Stack :: Pop()
{
    return 0;
}   

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Peep
//
//  Description       : Returns the top element of the Stack
//                      without removing it.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Returns the top element of the Stack.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Stack :: Peep()
{
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements present in the
//                      Stack from top to bottom.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Displays all Stack elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Stack :: Display()
{

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of elements
//                      present in the Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Returns the number of Stack elements.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Stack :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Stack object.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Creates a Stack object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Stack sobj;

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
//  No output.
//
//////////////////////////////////////////////////////////////////