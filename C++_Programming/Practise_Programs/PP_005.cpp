//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_005
//
//  Description       : This program accepts two numbers from the
//                      user and calculates their addition using
//                      a generic class and function template.
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

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    cout<<"Enter the First Number : ";
    cin >>iNo1;

    cout<<"Enter the Second Number : ";
    cin >>iNo2;

    Addition<int> aobj;

    iRet = aobj.Add(iNo1, iNo2);    

    cout<<"Addition of Numbers is : "<<iRet<<endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10
//      20
//
//  Sample Output :
//
//      Enter the First Number : 10
//      Enter the Second Number : 20
//      Addition of Numbers is : 30
//
//////////////////////////////////////////////////////////////////