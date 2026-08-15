//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_006
//
//  Description       : This program accepts two values from the
//                      user and calculates their addition using
//                      a generic class and a generic function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
class Addition
{
    public:

        //////////////////////////////////////////////////////////////////
        //
        //  Function Name     : Add()
        //
        //  Description       : It is used to calculate the addition of
        //                      two values of generic data type T.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 15/08/2026
        //
        //////////////////////////////////////////////////////////////////

        T Add(T iNo1, T iNo2)
        {
            return iNo1 + iNo2;
        }
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Calculate()
//
//  Description       : It is used to accept two values of generic
//                      data type T and calculate their addition.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/08/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
void Calculate()
{
    T iNo1 = 0, iNo2 = 0, iRet = 0;

    cout<<"Enter the First Number : ";
    cin >>iNo1;

    cout<<"Enter the Second Number : ";
    cin >>iNo2;

    Addition<T> aobj;

    iRet = aobj.Add(iNo1, iNo2);    

    cout<<"Addition of Numbers is : "<<iRet<<endl;
}

int main()
{
    Calculate<float>();    

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10.5
//      20.5
//
//  Sample Output :
//
//      Enter the First Number : 11.3
//      Enter the Second Number : 21.1
//      Addition of Numbers is : 32.4
//
//////////////////////////////////////////////////////////////////