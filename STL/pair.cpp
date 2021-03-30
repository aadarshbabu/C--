


#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

printpair(pair<int,char> &p1)
{
  cout<<p1.first<<" "<<p1.second;
}


int main(){
    
    pair<int,char> p1; // pair is use to maintain a relation between tow entati;
    
    int va;
    char val;
   cout<< "inter a value";   
   cin>>va>>val;
    

    p1=make_pair(va,val);
    // p1={212,4};
    printpair(p1);

    return 0;
}