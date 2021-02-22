#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Concate
{
    private:
    string name;
    public:
   void setname(){
       string temp;
       cout<<"Enter Your name";
       cin>>temp;
        this->name=temp;
    }
   void showData()
    {
        cout<<name<<" "<<endl;
    }

 Concate  operator+(Concate data){
     Concate temp;
     temp.name= name.append(data.name);
      return temp;
    }


};
int main()
{
    // This is plus operator overloaded....
    // If you hava a tow string and you has been concatinate
    //two string This plus operaotar overloaded..
    Concate name, name1;
    name.setname();
    name1.setname();
    name= name+name1;// Plus operotar overloaded
    name.showData();

}