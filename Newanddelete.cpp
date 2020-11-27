
#include<iostream>
using namespace std;


class testonly
{
private:
    int data;
    int data2;
public:
    testonly(int data);
    ~testonly();

    void showname();
    void show(){
     cout<<"This is inislilzing the data"<<data<<endl;
     cout<<"This is inislilzing the data2 "<<data2<<endl;

 }


};

 void testonly::showname(){

    cout<<"hello Aadarsh Singh How are you"<<endl;
}

 testonly::testonly(int data)
{
    this->data=2;
    this->data2=data;
}

 testonly::~testonly()
{
    data=0;
    data2=-1;
    cout<<"hello aadarsh";
    cout<<"Data value "<<data<<endl;
    cout<<"Data2 value "<<data2<<endl;
}


int main(){


    testonly *ptr =new testonly(44);//  when you create a object in dynimicly Distructor can't be call in By Default or (Dirictly). You are call manualy.. 
    ptr->show();
    ptr->showname();
    ptr->~testonly(); // Call Distructor Manually.
    
    return 0;
}