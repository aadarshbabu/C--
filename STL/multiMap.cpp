// Multimap is similar to the map .
// but its multiple value in same key../
// it is also a log(n) time complexcty in inserting and deleting the value.
// its store the value in sotered form..

#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    multimap<int, string > m;
    cout<<	"how many value you have insert";
    cin>>n;

    while (n--)
    {
        int key;
        string value;
        cout<<	"enter a value;";
        cin>>key>>value;
        m.insert({key,value});
    }

        for(auto &value: m)
        {
            cout<<value.first<<value.second<<endl;
        }



}

