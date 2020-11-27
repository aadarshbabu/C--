
#include<iostream>
#include<string>
using namespace std;

class array
{
private:
    int a[10];
public:
    void insert(int index, int value)
    {
        cout<<index<<endl;
        //cout<<"value is :"<<value<<endl;
        a[index]=value;
    }
   void showvalue()
    {
         for(int i=0;i<9;i++)
         {
            cout<<"the array Element is "<<a[i]<<endl;
                // cout<<"the array Element is "<<a[1]<<endl;
                //cout<<"the array Element is "<<a[2]<<endl;
         }
    }

};

class stact : private array
{
    private:
    int top=0;
    public:

    void push(int valu){
        cout<<valu<<endl;
            insert(top,valu);
        top++;
    }


};


int main(){
    array a1;
    stact s1;
   // a1.insert(1,22);
   int i=1;
   while( i<9){
     s1.push(9*i);
     i++;
   }
     //a1.insert(2,33);
        a1.showvalue();

    return 0;
}
