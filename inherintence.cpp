#include<iostream>
using namespace std;
class car{
    private:
    int value;
    public:
    car()
    {
        value=2;
    }
    void gare()
    {
        if (value<5)
        {
            value++;
        }
    }
    void show()
    {
        cout<<value<<endl;
    }

};
class sportcar : public car
{
    private:
    int sporcar;
    public:
    sportcar()// defult constructor...
    {
        sporcar=3;
    }
     void sport()
     {
        if(sporcar<4)
        {
            sporcar++;
        }
    }

    void shows()
    {
        cout<<"sport car vlaue"<<sporcar<<endl;
    }




};
int main(){
    sportcar c2;
    c2.sport();

     car c1;
    // c1.show();
    c2.gare();
    c2.show();
    // c1.gare();
     c2.shows();
    return 0;
}