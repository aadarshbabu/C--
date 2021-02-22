#include<iostream>
using namespace std;

class complex{
    private:
    int number;
    int imagenaryNumber;
    public:
    int setdata(int num, int imgNum);//function is decleared in class..
    int showdata();

};
 int complex::showdata()// outside difine class..
{
    cout<<"The value of "<<number<<" "<<imagenaryNumber<<endl;
}
int complex::setdata(int num, int imgNum)// function outside defenation of class
{
    number=num;
    imagenaryNumber=imgNum;
}

int main()
{
    int val1,val2;
    cout<<"inter some number"<<endl;
    cin>>val1>>val2;
    complex c1;
    c1.setdata(val1,val2);
    c1.showdata();
}