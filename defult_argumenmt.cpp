#include<iostream>
using namespace std;

int addition(int x, int y, int z=0);
int addition(int x, int y, int z)
{

    return x+y+z;

}

int main()
{
    int value1,value2;
    cout<<"enter a vlaue"<<endl;
    cin>>value1>>value2;
  int result=addition(value1, value2);
  cout<<result<<endl;
}