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
int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;

    ptr->Fun();
    ptr->Gun();

    delete ptr;

    return 0;
}