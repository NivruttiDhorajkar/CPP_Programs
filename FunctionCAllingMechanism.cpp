#include<iostream>
using namespace std;

//Call by value
void fun(int no)
{
    cout<<"Inside call by value"<<no<<"\n";
}

//Call by address
void gun(int *p)
{
    cout<<"Inside call by Address"<<*p<<"\n";
}

// Call by reference
void sun(int &ref)
{
    cout<<"Inside call by reference"<<ref<<"\n";
}

int main()
{
    int i=10;
    int j=10;
    int k=10;

    fun(i);     //fun(10);
    gun(&j);    //gun(200);
    sun(k);     //sun(k);

    return 0;
}