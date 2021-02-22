#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// friend function is a function it is access all the classes datamenber.
// This function is decleared as Class 
//it is defination in outside the class.
//If you call the friend function you can't need to object 
// it is independet function it's decleared as a friend in classes. 
class AxisBank;
class SBI{
    private:
    int ac_balance;
    public:
   void setbalance(int balance){
        this->ac_balance=balance;
    }
    void showbalance(){
        cout<<ac_balance<<endl;
    }
    void friend totalbalance(SBI,AxisBank);

};

class AxisBank{
    private:
    int ac_balance;
    public:
   void setbalance(int balance){
        this->ac_balance=balance;
    }
    void showbalance(){
        cout<<ac_balance<<endl;
    }
    void friend totalbalance(SBI,AxisBank);

};

void totalbalance(SBI sbiballance, AxisBank axisbalance){
    cout<<sbiballance.ac_balance + axisbalance.ac_balance;
    
}




// class friendfunction
// {
// private:
//     int data;
// public:

//     friendfunction(int data );
//     ~friendfunction();
//    void friend showdata(friendfunction f1){
//        cout<<f1.data;
//    }
// };

// friendfunction::friendfunction(int data)
// {
//     this->data=data;
// }

// // friendfunction::~friendfunction()
// {
// }

int main(){
    SBI p1;
    AxisBank P2;
    p1.setbalance(440);
    P2.setbalance(4432);
    totalbalance(p1,P2);

    
//  friendfunction f1(33);
//     showdata(f1);

    return 0;
}