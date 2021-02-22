#include<iostream>
using namespace std;
class complex
{
    private:
    int num;
    int imgN;
    public:
    void setdata(int val, int val1)//its take two simple value and assign the private varible.
    {
        num=val; imgN=val1;
    }

   void dirictadd(complex c,complex c2)//it's take two complex number and add this.
    {
        num=c2.num+c.num;
        imgN=c2.imgN+c.imgN;
    }

    complex addComplex(complex c1)//take complex number and add and return complex class.
    {
        complex c2;
        c2.num=num+c1.num;
        c2.imgN=imgN+c1.imgN;
        return c2;
    }
    void showData()
    {
     cout<<"The value of number "<<num<<"the number of imag"<<imgN<<endl;
    }


};

int main()
{
    int val1, val2;
    cout<<"Enter a number"<<endl;
    cin>>val1>>val2;
    complex c1,c2,c3;
    c1.setdata(val1,val2);
    c2.setdata(val1,val2);
    c3.dirictadd(c1,c2);

    // c2.setdata(c1);
    // complex c3=c2.addComplex(c1);
    c3.showData();


}