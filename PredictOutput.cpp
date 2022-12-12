#include<iostream>
using namespace std;

class Demo
{
    public:
        void fun(int *p)
        {
            cout<<"First Defination";
        }
        void fun(float *p)
        {
            cout<<"Second Defination";
        }
        void fun( int no)
        {
            cout<<"Third Defination";
        }
};
int main()
{
    int no=11;


    float f=3.14;

    Demo obj();


    return 0;
}