//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_214
//
//  Description       : Demonstration of creating a Singly Linear
//                      Linked List manually using objects in Java.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
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
//  Description       : Represents a node of a Singly Linear
//                      Linked List containing data and a
//                      reference to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//////////////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_214
//
//  Description       : Creates three node objects, assigns data
//                      to each node, connects them using next
//                      references, and stores the first node
//                      in the head reference.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_214
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates and connects three nodes to
    //                      construct a Singly Linear Linked List.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 07/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Creates a linked list containing
    //                      11, 21, and 51.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public static void main(String A[])
    {
        node head = null;

        node obj1 = null;
        node obj2 = null;
        node obj3 = null;

        obj1 = new node();
        obj2 = new node();
        obj3 = new node();

        obj1.data = 11;
        obj2.data = 21;
        obj3.data = 51;

        obj1.next = obj2;
        obj2.next = obj3;
        obj3.next = null;

        head = obj1;
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
//  Linked List:
//
//  | 11 | -> | 21 | -> | 51 | -> NULL
//
//  Note: The program creates the linked list but does not
//        display it on the console.
//
//////////////////////////////////////////////////////////////////