#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// this is only contain a unick value...
//time complex log(n)..
int main(){

        set<int> s;
        s.insert(22);
        s.insert(23);
        s.insert(23);
        s.insert(24);
        s.insert(24);
        s.insert(25);
        s.insert(26);
        s.insert(27);

         auto it= s.find(23);  // find function in return the iterator... to accoding
                                // find the value almost seme to the maps..
                                // finding the value takes log n time complexcty..


          //  cout<< (*it) << endl;
         // if value is not find this funcion .. it return   //    s.end(); .

         if(it!=s.end()){
                s.erase(it); // there are two method to delete the value. form the list..
                s.erase(25);  // there are two way to delete the value form the sets..
                               // 1. iterator . and 2. dirict value pass from the erase functio..
                               // 
         }

        for(auto &value:s)
        {
            cout<<value<<endl;
        }
        cout<<"value printed complite"<<endl;



     set<string>name;
     name.insert("hii");
     name.insert("hhellii");
     name.insert("aadarsh");
     name.insert("babu");
     name.insert("sing");

     for(auto value: name)  // its sote value in sorted ordered..
     {
         cout<<value<<endl;
     }
            
             name.clear();// erase all the element in the list.
           auto boovl= name.empty(); // return the true if set is empty..
           cout<<boovl<<endl;
        for(auto ii=name.begin(); ii!=name.end(); ++ii)  // You can itrate the list this way..
        {
            cout<<(*ii)<<endl;
        }


    return 0;
}