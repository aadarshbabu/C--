#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class Person{
    private:
    int id;
    string name;
    string address;
    string ContectNo;
    string country;
    string gender;
    public:

    void setId(int Id){
        this->id=Id;
    }
    void setName(string name){
        this->name=name;
    }
    void setAddress(string address){
        this->address=address;
      cout<<address;
    }
    void setContectNo(string contectNo){
        this->ContectNo=contectNo;
        cout<<ContectNo;
    }
    void setCountry(string country){
        this->country=country;
        cout<< this->country;
    }
    void setGender(string gender){
        this->gender=gender;
        cout<<gender;
    }

    // void setname(char Name){
    //     name=Name;
    // }
//    virtual void f1()=0;

};

class Student : public Person{
    int sid;
    public:
    void f1(){ } // over riding is most improtent in pure virtual function. if you not override pure vittual function. child class will be a pure virtual function
    void setSid(int sid){
        this->sid=sid;
    }
   


};



int main(){
       Person obj;
    
    int id;
    //  Student  obj;
     
     char name[30];
     string address;
     char contry[10];
   cin>>id;
   cin>>name;
   cin>>address;
   cin>>contry;
  

    obj.setId(id);
    obj.setName(name);
    obj.setAddress(address);
    obj.setCountry(contry);
    obj.setGender("male");
    obj.setContectNo("9631526557");
    obj.setId(44);
    
    return 0;
}