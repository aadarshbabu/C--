#include<iostream>
using namespace std;

int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{   int value1,value2;
   cout<<"enter a two value"<<endl;
   cin>>value1>>value2;
   swap(value1,value2);
   cout<<value1<<value2<<endl;
    



}