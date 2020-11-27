#include<iostream>
using namespace std;
class item{
 private:
 int a, b;

    public:
    setdata(int x, int y){
        a=x;b=y;
    }

    int getM()
    {
        return(a);}
    int getN(){
        return(b);   
    }


};
class product
{
    private:
    int p, q;
    public:
    product(){
    }// Defult Constructor....
    product(item l){ // product class constructor ..
        p=l.getM();
        q=l.getN();
    }

    showdata(){
        cout<<"\n P  "<<p<<"  Q   "<<q;
    }
    
};




int main(){
    item i1; // item class.. 
    product p1; // product class...
    i1.setdata(3,4);
    p1=i1; // copy data one class to another class..
    p1.showdata();
    
    return 0;
}