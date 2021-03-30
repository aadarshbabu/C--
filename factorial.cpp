#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    long fact=1;
    for(int i=2;i<=N; i++)
    {
        fact=fact*i;
    }
  cout<<fact;
    return 0;
}