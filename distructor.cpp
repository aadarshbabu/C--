#include<iostream>
using namespace std;
class A
{
    int val;
    public:
    ~A(){
        val=22;
    cout<<"The value is "<<val<<endl;

    }
};

class B: public A
{
private:
    int vale;
public:
        int y;

        ~B(){
            vale=44;
            cout<<"The value is"<<vale<<endl;

            }
};


int main(){
    B obj;
    return 0;
}