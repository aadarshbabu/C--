#include<iostream>
using namespace std;
class A{
    public:
    void f1(){
        cout<<"Class A f1 function"<<endl;
    }
    void f2(){
        cout<<"class B f2 function"<<endl;
    }
};
class B : public A{
    public:
    // void f1(){
    //      cout<<"Class B f1 function"<<endl;

    // }
    void f2(int x){
        cout<<"class B f2 function"<<x<<endl;
    }
};
int main(){
     B obj;// child class object ...
     obj.f1();// if function name is not define in chile class compiler search function name
     //parent classs.
     obj.f2(3);// function can't produce error because Child class function exictaly match.
     obj.f2();// error Because function name is define in child class but take aurgument..
     //if function name match in chile class compiler not search function in parent class..

    return 0;
}