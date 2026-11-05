//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_079
//
//  Description       : Implements a Generic Stack using a Singly
//                      Linear Linked List with push, pop, peep,
//                      display, and count operations. Supports
//                      different data types using templates.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
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
//  Description       : Represents a generic node of the Stack
//                      containing data of type T and a pointer
//                      to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
struct node
{
    T data; 
    struct node *next;
};

//////////////////////////////////////////////////////////////////
//
//  Class Name        : Stack
//
//  Description       : Provides generic member functions to
//                      perform push, pop, peep, display, and
//                      count operations using a linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
class Stack
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Stack();
        void Push(T iNo);         
        T Pop();                  
        T Peep();                 
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
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Initializes the Stack object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
Stack<T> :: Stack()
{
    first = NULL;
    iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Push
//
//  Description       : Creates a new node and inserts it at the
//                      beginning of the linked list, making it
//                      the top element of the Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : Value of generic data type T.
//  Output            : Adds a new element to the top of the Stack.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void Stack<T> :: Push(T iNo)    
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;   
    first = newn;

    iCount++;
}   

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Pop
//
//  Description       : Removes and returns the top element from
//                      the Stack. If the Stack is empty, displays
//                      an error message and returns -1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Returns the removed top element or -1
//                      if the Stack is empty.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T Stack<T> :: Pop()
{
    T iValue = 0;
    struct node<T>*temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        temp = first;

        first = first->next;
        delete temp;

        iCount--;
        return iValue;
    }
}   

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Peep
//
//  Description       : Returns the top element of the Stack
//                      without removing it. If the Stack is
//                      empty, displays an error message and
//                      returns -1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Returns the top element or -1 if the
//                      Stack is empty.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T Stack<T> :: Peep()
{
    T iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;

        return iValue;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Traverses the linked list and displays
//                      all Stack elements from top to bottom.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Displays all Stack elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void Stack<T> :: Display()
{
    struct node<T> *temp  = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of elements
//                      present in the Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Returns the number of Stack elements.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
int Stack<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an integer Stack object, inserts
//                      four elements, displays the Stack, prints
//                      the element count, removes the top element,
//                      retrieves the top element using Peep(),
//                      and displays the updated Stack.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Displays Stack elements, popped element,
//                      top element, and element counts.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Stack<int> sobj;
    int iRet = 0;

    cout<<endl;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    cout<<endl;

    iRet = sobj.Pop();
    cout<<"Poped element is : "<<iRet<<endl;

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    cout<<endl;

    iRet = sobj.Peep();
    cout<<"Peeped Element is : "<<iRet<<endl;

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    cout<<endl;

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
//  | 101 |
//  | 51 |
//  | 21 |
//  | 11 |
//  Elements of the stack are : 4
//
//  Poped element is : 101
//  | 51 |
//  | 21 |
//  | 11 |
//  Elements of the stack are : 3
//
//  Peeped Element is : 51
//  | 51 |
//  | 21 |
//  | 11 |
//  Elements of the stack are : 3
//
//////////////////////////////////////////////////////////////////