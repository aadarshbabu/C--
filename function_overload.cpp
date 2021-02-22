#include<iostream>
using namespace std;

int area(int, int);//decleration of function
float area(int );// decleration of funciton name is same but argument is diffrence.

float area(int r)// defination the function
{
    return r*r*3.12;
}
int area(int val1, int val2)//defination the function
{
    return(val1*val2);
}

int main()
{
    int val1,val2;
    cout<<"enter a two value"<<endl;
    cin>>val1>>val2;
    cout<<"result "<<area(val1,val2)<<endl;
    cout<<"result circul"<<area(val1)<<endl;
}