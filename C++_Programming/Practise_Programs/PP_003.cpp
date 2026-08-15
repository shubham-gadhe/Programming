//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_003
//
//  Description       : This program accepts two numbers from the
//                      user and calculates their addition using
//                      a member function of a class.
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

class Addition
{
    public:
        //////////////////////////////////////////////////////////////////
        //
        //  Function Name     : Add()
        //
        //  Description       : It is used to calculate the addition of
        //                      two given integer numbers.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 15/08/2026
        //
        //////////////////////////////////////////////////////////////////

        int Add(int iNo1, int iNo2)
        {
            int iSum = 0;
            iSum = iNo1 + iNo2;
            return iSum;
        }
};

int main()
{
    int iNo1 = 0, iNo2 = 0, iSum = 0, iRet = 0;

    cout<<"Enter the First Number : ";
    cin >>iNo1;

    cout<<"Enter the Second Number : ";
    cin >>iNo2;

    Addition aobj;

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