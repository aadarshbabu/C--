#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findSumOfDigit(int n)
{
    if(n==0)
        return 0;
     int lastdigit=n%10;
     return lastdigit+findSumOfDigit(n/10);



}

int main(){
    int n=5325;
   cout<<findSumOfDigit(n)<<endl;

    
    return 0;
}