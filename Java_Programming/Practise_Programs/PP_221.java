//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_221
//
//  Description       : Implementation of Singly Linear Linked
//                      List using classes and encapsulation in Java.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Class Name        : node
//
//  Description       : Represents a node containing integer data
//                      and a reference to the next node.
//                      Initializes the node using a
//                      parameterized constructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : node
    //
    //  Description       : Initializes the data member with the
    //                      given value and the next reference
    //                      with null.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : Integer value to initialize the node.
    //
    //  Output            : Creates and initializes a new node.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : SinglyLL
//
//  Description       : Implements a Singly Linear Linked List
//                      using private data members and public
//                      methods for list operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class SinglyLL
{
    private node first;
    private int iCount;

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : SinglyLL
    //
    //  Description       : Initializes the first reference to null
    //                      and the node count to zero. Displays
    //                      a constructor execution message.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Initializes an empty linked list and
    //                      displays "Inside Constructor".
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : Display
    //
    //  Description       : Reserved for displaying all elements
    //                      of the linked list. Currently, the
    //                      method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void Display()
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : Count
    //
    //  Description       : Returns the total number of nodes
    //                      present in the linked list.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Returns the value of iCount.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public int Count()
    {
        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertFirst
    //
    //  Description       : Reserved for inserting a new node at
    //                      the beginning of the linked list.
    //                      Currently, the method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void InsertFirst(int iNo)
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertLast
    //
    //  Description       : Reserved for inserting a new node at
    //                      the end of the linked list.
    //                      Currently, the method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void InsertLast(int iNo)
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertAtPos
    //
    //  Description       : Reserved for inserting a new node at
    //                      a specified position in the linked list.
    //                      Currently, the method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : Integer value and position.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void InsertAtPos(int iNo, int iPos)
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteFirst
    //
    //  Description       : Reserved for deleting the first node
    //                      from the linked list. Currently, the
    //                      method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void DeleteFirst()
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteLast
    //
    //  Description       : Reserved for deleting the last node
    //                      from the linked list. Currently, the
    //                      method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void DeleteLast()
    {}

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteAtPos
    //
    //  Description       : Reserved for deleting a node from a
    //                      specified position in the linked list.
    //                      Currently, the method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : Position of the node to be deleted.
    //
    //  Output            : No operation is performed.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void DeleteAtPos(int iPos)
    {}
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_221
//
//  Description       : Creates an object of the SinglyLL class
//                      to initialize an empty linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_221
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates an object of the SinglyLL class
    //                      and invokes its default constructor.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Displays "Inside Constructor".
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No user input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Inside Constructor
//
//////////////////////////////////////////////////////////////////