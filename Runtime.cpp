#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        void fun()
        {
            cout<<"Inside Base fun"<<"\n";
        }
        void gun(int i)
        {
            cout<<"Insude Base gun with one integer"<<"\n";
        }
        void gun(int i, int j)
        {
            cout<<"Inside Base gun with two integer"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        
        void sun()
        {
            cout<<"Inside Derived sun"<<"\n";
        }
        void fun()
        {
            cout<<"Inside Derived fun"<<"\n";
        }

};

int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();
    
    return 0;
}