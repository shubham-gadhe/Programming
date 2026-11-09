//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_224
//
//  Description       : Implementation of Singly Linear Linked
//                      List with insertion, display, and count
//                      operations using Java.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
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
//  Date              : 09/11/2026
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
    //  Date              : 09/11/2026
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
//  Date              : 09/11/2026
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
    //                      and the node count to zero.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Initializes an empty linked list.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : Display
    //
    //  Description       : Traverses the linked list using a
    //                      temporary reference and displays
    //                      the data of every node.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Displays all linked list elements
    //                      followed by null.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void Display()
    {
        node temp = first;

        while(temp != null)
        {
            System.out.print(" | " + temp.data + " | -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : Count
    //
    //  Description       : Returns the total number of nodes
    //                      present in the linked list.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
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
    //  Description       : Creates a new node and inserts it at
    //                      the beginning of the linked list.
    //                      Updates the node count after insertion.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : Inserts the given value at the beginning
    //                      of the linked list.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertLast
    //
    //  Description       : Creates a new node and inserts it at
    //                      the end of the linked list by traversing
    //                      the list until the last node is reached.
    //                      Updates the node count after insertion.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : Inserts the given value at the end
    //                      of the linked list.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        iCount++;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertAtPos
    //
    //  Description       : Reserved for inserting a new node at
    //                      a specified position in the linked list.
    //                      Currently, the method is empty.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
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
    //  Date              : 09/11/2026
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
    //  Date              : 09/11/2026
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
    //  Date              : 09/11/2026
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
//  Class Name        : PP_224
//
//  Description       : Creates an object of the SinglyLL class,
//                      performs insertion operations at the
//                      beginning and end, and displays the
//                      linked list along with its node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_224
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates a SinglyLL object, inserts
    //                      three elements at the beginning and
    //                      three elements at the end, displays
    //                      the linked list, and prints the count.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 09/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Displays all six nodes and their count.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(n)
    //
    //////////////////////////////////////////////////////////////////

    public static void main(String A[])
    {
        int iRet = 0;

        SinglyLL sobj = new SinglyLL();

        System.out.println();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);
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
//  | 11 | ->  | 21 | ->  | 51 | ->  | 101 | ->  | 111 | ->  | 121 | -> null
//  Number of nodes are : 6
//
//////////////////////////////////////////////////////////////////