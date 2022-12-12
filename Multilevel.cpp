#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor"<<"\n";
        }
        ~Base()
        {
            cout<<"Inside Base Destructor"<<"\n";
        }
        void Fun()
        {
            cout<<"Inside Base fun"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside Derived constructor"<<"\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<"\n";
        }

        void Gun()
        {
            cout<<"Inside gun of Derived"<<"\n";
        }
};

class DerivedX : public Derived
{
    public:
        int i,j;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor"<<"\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor"<<"\n";
        }
        void Sun()
        {
            cout<<"Inside Sun"<<"\n";
        }
};

int main()
{
    cout<<"Size of Base:"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived:"<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX:"<<sizeof(DerivedX)<<"\n";

    DerivedX dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
    
    return 0;
}