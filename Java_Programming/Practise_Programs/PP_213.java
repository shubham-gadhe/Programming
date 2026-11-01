//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_213
//
//  Description       : Demonstrates the creation of a node using
//                      a user-defined class and initializes its
//                      data and next reference.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//  Time Complexity   : main() - O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Class Name        : node
//
//  Description       : Represents a node containing an integer
//                      data field and a reference to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//////////////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_213
//
//  Description       : Creates an object of the node class,
//                      initializes its data and next reference,
//                      and displays their values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_213
{
    public static void main(String A[])
    {
        node newn = null;

        newn = new node();

        newn.data = 11;
        newn.next = null;

        System.out.println(newn.data);
        System.out.println(newn.next);
    }
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
//  11
//  null
//
//////////////////////////////////////////////////////////////////