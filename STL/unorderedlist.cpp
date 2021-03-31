#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        // unordered sets is similar to the sets ..it is only one diffrent its. store the value in unsorted order...
        // 

        unordered_set <string>s; // internaly its store value in hash map. table..
        // unordered_set  inserting and searcting generally log(n) time complexcty..
        // you cant decleared a complex container.. like sets < map<> > or any thing..
        s.insert("hello");
        s.insert("aadarsh");
        s.insert("world");
        s.insert("singh");


        for(auto &value: s)
        {
            cout<<value<<endl;
        }






    return 0;
}