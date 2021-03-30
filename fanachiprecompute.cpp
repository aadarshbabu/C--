#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=10e5;
int arr[N];
void precomputeFibonanchi(){
    arr[0]=arr[1]=1;
    for (int i = 2; i < N; i++)
    {
       arr[i]=arr[i-1]+arr[i-2];
    }
}

int main(){
    int n;
    cin>>n;
  
    precomputeFibonanchi();
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
  
    
    return 0;
}