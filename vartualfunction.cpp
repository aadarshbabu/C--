

#include<iostream>
using namespace std;

class A{
public:
    virtual void f1(){  
            cout<<"This is a f1 virtural function"<<endl;
    
    }
     virtual void f2(){
        cout<<"This is a f2 function"<<endl;
    }
     virtual void f4(){
        cout<<"This is a f4 functon"<<endl;

    }

    // This is a vartual function. Compiler also known this function is late binding in object pointer.



};
class B :public A{

    public:

    void f1(){
        cout<<"This is f1 Normal function function"<<endl;

    }
    void f2(){
        cout<<"this is f2 normal function"<<endl;
    }
    void f4(int x){
        cout<<"This is f4 normal funcion"<<endl;
    }
  

};


int main(){
    
    B obj;
    A *ptr;
    ptr=&obj;  //ptr is called as a object pointer;  
    ptr->f1(); //late binding
    ptr->f2(); //late binding
    // ptr->f4();
    ptr->f4();  // late binding

    
    
    // when you call f1 function in class A type pointer object. compiler has bind f1() in seen as a type of pointer. But can you call a same function in class b/ yes you do it. because when object pointer is class a type Class B address are contain in object pointer.
        // but how you call. Vartural keyword is help them to call as a class B function.




    return 0;
}