#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class increment
{
private:
    int data;
public:
 increment(){};
    increment(int data);
    ~increment();
   int showdata();// function decleration

    increment operator ++(int){
         increment temp;
        temp.data= data++;
        return temp;
    }

     increment operator ++(){ //pre increment
         increment temp;
        temp.data= data+=1;
        return temp;
    }
};

int  increment::showdata(){
    cout<<data;
    return 0;
}
 increment:: increment(int data)
{
 this->data=data;
}


 increment::~increment()
{
    // cout<<"your operation has been sucessfull";
}

int main(){
     increment i1(55),i2;
    i2= ++i1;  //preincrement;  first increment then assign...
    i2.showdata(); // incremet the i1 object then assign the value i2 object...
    i1.showdata();
    cout<<endl;
    i2=i1++; //postincrement; first assine then increment..
    i2.showdata(); // first assign the i1 object value to i2 object and then increment the i1 object..
    i1.showdata();
    return 0;
}