// there are only diffret in orederd maps and unorderd map is  it store key value pair in unsorted form..
// it's can not be store  key in oredrd maps..
// it's. can't support the dublicate the value..
    

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // internaly unordered map store a value in hash map table..
    // time complexcty in unordered map is generally log(1).. it depend upon the less colision in the funciton.,..
    unordered_map<string, string > m;
    // you cna't use the key of complex data type like  ''unorederd_map<vecotr<int>, string>  '' this is not allowed..
    cout<<	"how many value you have insert";
    cin>>n;

    // m[key]=vlaue; this is the way to insert the value of key..
    while (n--)
    {
        string key;
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