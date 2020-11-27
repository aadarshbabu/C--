#include<iostream>
using namespace std;
/*
This class show the exemple the Constructor And Distructor ..
Class A is inharit By class B;
*/
class A{
    int a;
    int xl;
    public:
    A(int k)
    {
        a=k;
    cout<<"the a value"<<a<<endl;

    }
    ~A()
    {
      xl=00;
      cout<<xl;  
    }
};

class B : public A
{
    int b;
    int c;
    public:
    B(int x, int y):A(x)// first invoke  class A constructor. and A constructor
    //work is over then invoke B class constructor
    {
        b=y;
    cout<<"the a value"<<b<<endl;

    }
    // invoke B class Distructor. and the B Class distructor Work is over . By defualt A class
    // Distructor is invoked. simple fundamantle...
    ~B(){
        c=99;
        cout<<c<<endl;

    }
};
int main(){
    B obj(2,4);
    // it is B class object constructor.. Constructor pass Two int value..
    return 0;
}