//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_220
//
//  Description       : Demonstration of initializing a Singly
//                      Linear Linked List using a constructor.
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
//  Description       : Represents a Singly Linear Linked List
//                      using a first reference and a node count.
//                      Initializes the linked list using a
//                      default constructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class SinglyLL
{
    public node first;
    public int iCount;

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
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_220
//
//  Description       : Creates an object of the SinglyLL class,
//                      which initializes an empty linked list
//                      through its constructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_220
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