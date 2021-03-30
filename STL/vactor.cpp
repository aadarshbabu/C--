


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVactor(vector<int> &v) // this vactor passing by reference...
{
    cout<<"size of vactor"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

}

int main(){
      
      vector<int> v1;
      int n;
      cin>>n;
      for (int i = 0; i < n; i++)
      {
          int value;
          cin>>value;
          v1.push_back(value);
      }

    //   v1.push_back(43);

    //   for (int i = 0; i < v1.size(); i++)
    // {
    //     cout<<v1[i]<<endl;
    // }
     
     v1.pop_back();
     v1.pop_back();// pop_back() function remove the value from end of the vector; with lon(1) time complexcty....
      printVactor(v1); //passing v1 vactor as a referance..
      
    
    return 0;
}