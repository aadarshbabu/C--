
// 1<= N  <= 10^5
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  const int n=10e5+10;
long long arr[n]; 
int main(){
   arr[0]=1,arr[1]=1;
   for (int i = 2; i < n; i++)
   {
       arr[i]=arr[i-1]*i;
   }
   
   int t;
   cout<<"Enter a test cases";
    cin>>t;
    while (t--)
    {
      int j;
      cout<<"enter a value";
      cin>>j;
      cout<< arr[j];
    }
    
    return 0;
}


