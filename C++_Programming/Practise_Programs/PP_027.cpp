//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_027
//
//  Description       : Dynamic Array using Parameterised Constructor,
//                      Accept and Display Member Functions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int X = 5)
        {
            iSize = X;              
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;          
        }

        void Accpet()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the Array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{ 
    ArrayX *aobj = NULL;

    int iLength = 0;

    cout<<"Enter the number of element : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);     

    aobj->Accpet();                 
    aobj->Display();                

    delete aobj;                    
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of element :
//      5
//      Enter the elements :
//      10
//      20
//      30
//      40
//      50
//
//  Sample Output :
//      Elements of the Array are :
//      10
//      20
//      30
//      40
//      50
//
//  Note:
//      The array memory is allocated dynamically using new and
//      released using delete [] inside the destructor.
//
//////////////////////////////////////////////////////////////////