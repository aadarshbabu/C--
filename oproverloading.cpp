#include<iostream>
#include<stdio.h>
using namespace std;
int shodata();
class com
{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    com operator+ (com y)
        {
            com temp;
            temp.a=a+y.a;
            temp.b=b+y.b;
            return (temp);
        }

        // friend void shodata(com);
     int shodata(com k)
     {
         cout<<"The sum is Two number is "<<k.a<<" "<<k.b;
     }   
};

int main(){
    
    com c1, c2,c3,c4;
    int d1,d2,d3,d4;
    cout<<"Enter two number";
    cin>>d1>>d2>>d3>>d4;
    c1.setdata(d1,d2);
    c2.setdata(d3,d4);
    c3=c1+c2;
    c4.shodata(c3);
    return 0;
}