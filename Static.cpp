#include<iostream>
using namespace std;

class Demo
{
    public:             //Access Specifier
        int i;          //Instance variable
        int j;           //Instance variable
        static int k;
        static int l;

        Demo()
        {
            i=0;
            j=0;
        }
        Demo(int a, int b)
        {
            i=a;
            j=b;
        }

            //Demo void fun(Demo *this)
        void fun()      //Instance method
        {
            //static + non static
            cout<<"Inside fun\n";
            cout<<"Value of k in fun:"<<k<<"\n";
            cout<<"Value of l in fun:"<<l<<"\n";
            // cout<<"Value of i:"<<i<<"\n";
            // cout<<"Value of j:"<<j<<"\n";  
            cout<<"Value of i:"<<this->i<<"\n";
            cout<<"Value of j:"<<this->j<<"\n";
        }

        static void gun()   //Class method
        {
            //static
            cout<<"Inside static gun\n";
            cout<<"Value of k in gun:"<<k<<"\n";
            cout<<"Value of l in gun"<<l<<"\n";
            
           
        }
};

int Demo::k=0;  //static variable intialise
int Demo::l=0;

int main()
{
    cout<<"Inside Main\n";

    cout<<"value of k:"<<Demo::k<<"\n";
    cout<<"value of l:"<<Demo::l<<"\n";

    Demo::gun();

    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    // cout<<sizeof(obj1)<<"\n";     // 8
    // cout<<sizeof(obj2)<<"\n";    // 8 

    cout<<"value of i in obj1:"<<obj1.i<<"\n";
    cout<<"value of i in obj2:"<<obj2.i<<"\n";

    cout<<"value of j in obj1:"<<obj1.j<<"\n";
    cout<<"value of j in obj2:"<<obj2.j<<"\n";
    
    obj1.fun();     //fun(&obj1);
    obj2.fun();

    return 0;
}

// Size of object is summation of its non static characteristics
// Sizepof(obj)=sizeof(i) + sizeof(j);
// Sizepof(obj)=4 + 4;
// Sizepof(obj) =8