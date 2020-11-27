#include<iostream>
using namespace std;
class com
{
    int a,b;
    public:
   void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
   void shodata()
    {
        cout<<"Real part of Complex Number "<<a<<endl<<"or Imagenary Part is "<<b<<endl;
    }
    friend com operator+(com, com);
};
com operator+(com x, com y)
    {
        com temp;
        temp.a= x.a+y.a;
        temp.b= x.b+y.b;
        return(temp);
    }

int main(){
    com c1,c2;
    int a,b,c,d;
    cout<<"Enter  Real Number & Imagenary Number";
    cin>>a>>b;
    cout<<"Enter Real Number & Imagenary Number";
    cin>>c>>d;
    c1.setdata(a,b);
    c2.setdata(c,d);
    (c1+c2).shodata();
    // four way to call object and passing value
    // c3= operator+(c1,c2)
    // c3=(c1+c2)
    // com c3;
    // c3=shodata();
    // c1+c2.shodata();
    return 0;
}