#include<iostream>
using namespace std;

class Demo
{
    private:
        static int i;
    public:
        int j;
        Demo()
        {
            j=0;
        }
    friend void fun();
};
int Demo::i=0;

void fun()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<"\n";
    cout<<"Value of j:"<<obj.j<<"\n";
}

int main()
{
    cout<<"inside main"<<"\n";
    // cout<<"Value of i:"<<Demo::i<<"\n";
    
    fun();
    

    return 0;
}