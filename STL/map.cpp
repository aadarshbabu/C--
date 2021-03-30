#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// maps is soterd in the accodeing to key.
// if map key contain the string the key shorted by a dictonary ordered.
// maps cant support the dublicate value in the corusponding to key..


int main(){
    string key;
    string value;
    int n;
    map<string, string > m;
    cout<<	"how many value you have insert";
    cin>>n;

    // m[key]=vlaue; this is the way to insert the value of key..
    while (n--)
    {
        cout<<	"enter a value;";
        cin>>key>>value;
        m.insert({key,value});
    }

        for(auto &value: m)
        {
            cout<<value.first<<value.second<<endl;
        }

    return 0;
}