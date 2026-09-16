//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_028
//
//  Description       : Dynamic Array with Accept, Display and
//                      Summation Operations.
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

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{ 
    ArrayX *aobj = NULL;

    int iLength = 0, iRet = 0;

    cout<<"Enter the number of element : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);     

    aobj->Accpet();                 
    aobj->Display();                

    iRet = aobj->Summation();       

    cout<<"Summation is : "<<iRet<<endl;

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
//      Summation is : 150
//
//////////////////////////////////////////////////////////////////