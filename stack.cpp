
#include<iostream>
#include<string>
using namespace std;

class array
{
 protected:
    int size=10;
    int a[10];
    array()
    { int i=0;
        for(i=0;i<size;i++)
        {
            a[i]=0;
        }
    }
    void insert(int index, int value)
    {
        a[index]=value;
    }
   

};

class stack : public array
{
    private:
     int top=-1;
    public:
    int push(int valu){
        if(top==size-1)
        {
            cout<<"insertion not posible";
            return 0;
        }
         top++;
        insert(top,valu);
    }
    int  pop()
    {
        int value;
        if(top==-1)
        {
            cout<<"Pop is not posible";
        }
        value=a[top];
        top--;
        return value;


    }
    void showvalue()
    {
         for(int i=0;i<9;i++)
         {
            cout<<"the array Element is "<<a[i]<<endl;
         }
    }


};


int main(){
   
    stack s1;
   int i=1;
   while( i<=11){
     s1.push(9*i);
     i++;
     s1.pop();
   }
    s1.showvalue();

    return 0;
}
