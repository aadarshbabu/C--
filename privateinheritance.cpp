
#include<iostream>
#include<stdio.h>
using namespace std;
void insert(int ,int);
void push(int);
void showdata();
class array
{
private:
  int a[10];
   
public:
    void insert(int index, int value)
    {
        
        a[index]=value;
     }
        
    
    void showdata()
    {
        static int i=0; 
         {
             cout<<a[0]<<endl;
           i++;
        }
    }
};

class stact : private array
{   
    private:
    int top;
    
    public:
    stact()
    {
        top=0;
    }
    void push(int valu)
    {
            insert(top,valu);
            top=top+1;
    }
 
  
};


int main(){
    array a1;
    stact s1;
    // a1.insert(1,22);
    s1.push(44);
     s1.push(958);
     s1.push(33);
     //a1.insert(0,99);
    //  a1.insert(2,33);
    a1.showdata();
    return 0;
}