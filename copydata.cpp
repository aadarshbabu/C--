#include<iostream>
using namespace std;
   
class copydata 
{
    int c, d;
    public:

    void showdata()
    {
        cout<<c<<"  "<<d;
        cout << "hello world";
    }
 
    



};

class complex
{
    int a,b;
    public:
    void setdata(int x, int y){
        a=x;b=y;

    }
    void showdata(){
         cout<<" a "<<a<<"B"<<b;
    }
    complex::tem;
    tem.a=a;
    tem.b=b;
    
    
operator copydata()
    {
 cout<<"hello cheak";
    return(tem);
    }



};


int main()
{
    // int x;

    complex c1;
    copydata c2;
    c1.setdata(3,5);
    c2=c1;
    c2.showdata();
    return(0);
}