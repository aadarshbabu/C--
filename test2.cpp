#include<iostream>
using namespace std;
// void storedata(int z, int v);
void setdata(int x,int y);
void setd(int ,int);
void shodata();
class A
{
    private:
    int a=0,b=0;
    public:
   void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    
  
   void shodata()
    {
        cout<<"the res is"<<a<<b<<endl;
    }
};

class B:private A
{
    // A a1;
    private:
    int c,d;
    public:
    void setd(int x,int z)
    {
        setdata(x,z);
    }
};
class D:public B
{
    public:
    void set(int xm,int vm)
    {
       setd(xm , vm);
    }
    

};


int main(){
    B b1;
    D d1;
    // A a1;
    d1.set(31,51);
    b1.shodata();
    // d1.shodata();
    
    return 0;
}