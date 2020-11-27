#include<iostream>
using namespace std;
class A
{
    int l,b,h;
    public:
    setvalue(int l, int b, int h)
    {
        //This is Exemple is This pointer 
        //This pointer is Indetified Instent Member Variable..
        // Varible name is colide..is same name..
        this->l=l;
        this->b=b;
        this->h=h;
    }
    showvalue()
    {
        cout<<l<<" "<<b<<"  "<<h<<" ";
    }
};

int main(){
    A obj;
    A *ptr;
    //  pointer is contain object Address;
     ptr=&obj;
     //  access the pointer to instence member function...
    //  "->" this operator is access to pointer to refer the 
    ptr->setvalue(33,222,3333);
    ptr->showvalue();

    obj.setvalue(33,44,22);
    obj.showvalue();

    
    return 0;
}