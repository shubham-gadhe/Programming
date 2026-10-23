
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_049
//
//  Description       : Demonstrates data hiding by declaring the
//                      singly linked list's data members private.
//                      Direct access to these members from main()
//                      results in compilation errors.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:

        //////////////////////////////////////////////////////////////
        //
        //  Constructor Name  : SinglyLL()
        //
        //  Description       : Initializes the first pointer to NULL
        //                      and the element counter to zero.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;
        }
};

//////////////////////////////////////////////////////////////////
//
//  Method Name       : main()
//
//  Description       : Creates a SinglyLL object and attempts to
//                      access its private data members directly,
//                      demonstrating data hiding and compilation
//                      errors.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    // 5 node
    sobj.first = NULL;      // ERROR
    sobj.iCount = 15;       // ERROR

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Inside Constructor
//
//  Compilation Note:
//      The program does not compile because first and iCount are
//      private members of the SinglyLL class and cannot be accessed
//      directly from main().
//
//////////////////////////////////////////////////////////////////
