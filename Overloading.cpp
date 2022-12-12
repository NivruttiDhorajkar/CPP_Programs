#include<iostream>
using namespace std;

class Overloading
{
    public:
        //Add@2ii
        int Add(int A, int B)       //1000
        {
            cout<<"Addition of 2 integers:\n";
            return A+B;
        }
        //Add@2ff
         float Add(float A, float B)    //2000
        {
            cout<<"Addition of 2 floats:\n";
            return A+B;
        }
        //Add@2dd
         double Add(double A, double B)     //3000
        {
            cout<<"Addition of 2 doubles:\n";
             return A+B;
        }
        //Add@3iii
         int Add(int A,int B, int C)        //4000
        {
            cout<<"Addition of 3 integers\n";
             return A+B+C;
        }
        //fun@2fi
        void fun(float a, int B)
        {

        }
        //fun@2if
        void fun(int x, float y)
        {

        }

};


int main()
{
    Overloading obj;

    int i;
    float f;
    double d;

    i = obj.Add(11,12);     //1000
    cout<<i<<"\n";

    f = obj.Add(35.12f,10.45f);     //2000
    cout<<f<<"\n";

    d = obj.Add(89.12,45.99);   //3000
    cout<<d<<"\n";

    i = obj.Add(10,12,21);      //4000
    cout<<i<<"\n";

    return 0;
}