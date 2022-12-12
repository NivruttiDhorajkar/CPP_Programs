#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength=10)
        {
            cout<<"Inside constructor\n";
            iSize=iLength;
            Arr=new int[iSize];
        }

        ~Array()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }

        void Accept()
        {
           cout<<"Enter the value\n";
           int i =0;

           for(i=0;i<iSize;i++)
           {
            cin>>Arr[i]<<"\n";
           } 
        }
        void Display()
        {
            cout<<"Elememts of Array are \n";
            int i=0;
            for(i=0;i<iSize;i++)
            {
                cout<<Arr[i];
            }
        }

};

int main()
{
    cout<<"Inside main\n";
    Array obj1(4);
    Array obj2(6);

    obj1.Accept();
    obj1.Display();




    return 0;
}