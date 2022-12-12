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
        virtual void gun()
        {
            cout<<"Inside Base gun "<<"\n";
        }
       virtual void sun()
        {
            cout<<"Inside Base sun"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        
        void gun()
        {
            cout<<"Inside Derived gun"<<"\n";
        }
        void run()
        {
            cout<<"Inside Derived run"<<"\n";
        }
        virtual void mun()
        {
            cout<<"Inside Derived mun"<<"\n";
        }


};

int main()
{
    cout<<"Size of Base class:"<<sizeof(Base)<<"\n";        //8     //12
    cout<<"Size of Derived class:"<<sizeof(Derived)<<"\n";  //16    //20

    Base *bp = NULL;
    Derived dobj;
    bp=&dobj;   //upcasting

    bp->fun();
    bp->gun();
    bp->sun();

    return 0;
}