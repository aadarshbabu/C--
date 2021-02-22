#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverce( string name,int index=0)
{
 for(int i=index; i<name.size()/2 ;i++)
        {
            swap(name[i],name[(name.size()-1)-i]);
        }
    return name;
}


// int main(){
//     string name="Aadarsh singh";
//     string revc=reverce(name);
//     cout<<revc<<endl;
   
//     return 0;
// }