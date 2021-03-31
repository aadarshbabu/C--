#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // its support the dublicate value.
    // time complexcty is log(n);
    //its also store the value in sorted ordered..
    //
    multiset<string>name;

    name.insert("aadarsh");
    name.insert("singh");
    name.insert("aadarsh");
    name.insert("hello");
    name.insert("hello");
    name.insert("hello");
    name.insert("aadarsh");

    auto it=name.find("aadarsh");// its return the iteratorn address coursponding to value inserted to funciton,

    name.erase(it); // when you pass the iterator in erase funcion ..its only delete the a first ocurance value.. its cant delete the dublicate. value.

    name.erase("hello");  // but when you pass the value in erase funciton its delete the app present value in sets. meance it delete all dublicate value...


    for(auto &value: name)
    {
        cout<<value<<endl;
    }


    return 0;
}
