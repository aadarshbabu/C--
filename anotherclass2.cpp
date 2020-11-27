#include<iostream>
using namespace std;

class product
{
    private:
    int p;
    public:

     operator product()
     {
       
        return product(p);
     }

 void showdata(){
        cout<<"\n P  "<<p<<"  Q   "<<q;
    }
    
    
};




class item{
 private:
 int a, b;

    public:
    setdata(int x, int y){
        a=x;b=y;
    }
     
    

};



int main(){
    item i1; // item class.. 
    product p1; // product class...
    i1.setdata(3,4);
    p1=i1; // copy data one class to another class..
    p1.showdata();
    
    return (0);
}