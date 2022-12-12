#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;
        Base1()
        {
            cout<<"Inside Base1 Constructor"<<"\n";
        }
        ~Base1()
        {
            cout<<"Inside Base1 Destructor"<<"\n";
        }
        void fun()
        {
            cout<<"Inside Base1 fun"<<"\n";
        }
};

class Base2
{
    public:
        int I,J,K;
        Base2()
        {
            cout<<"Inside Base2 constructor"<<"\n";
        }
         ~Base2()
        {
            cout<<"Inside Base2 Destructor"<<"\n";
        }
          void Gun()
        {
            cout<<"Inside Base2 Gun"<<"\n";
        }
};

class Derived : public Base1,public  Base2
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"Inside DErived constructor"<<"\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<"\n";
        }
          void Sun()
        {
            cout<<"Inside Derived Sun"<<"\n";
        }
};
int main()
{
    Derived dobj;

    dobj.fun();
    dobj.Gun();
    dobj.Sun();

    return 0;
}