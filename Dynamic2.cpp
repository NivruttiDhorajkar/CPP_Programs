#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;
        int y;

    Demo()
    {
        cout<<"Inside Constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Inside Destructor"<<"\n";
    }
    void fun()
    {
        cout<<"Inside Fun"<<"\n";
    }
};
int main()
{
   // Demo obj1;

    Demo *ptr=NULL;
    ptr = new Demo;

    ptr->fun();
   cout<<"Value of X "<<ptr->x<<"\n"; 

    delete ptr;

    return 0;
}


// Demo * ptr = NULL;

// ptr = (Demo *)malloc(sizeof(Demo));
// // ptr = new Demo;

// ptr->Fun();

// free(ptr);
// // delete ptr;