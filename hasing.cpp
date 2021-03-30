#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=10e4+10;
int hah[N]; // globle array me variable decleared nhi kr sakte...
int main(){
    int n;
    cin>>n;
    int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    hah[(arr[i])]++;

}
int t=1;

while ( t--)
{ 
    for (int j = 0; j < n; j++)
    {
        cout<<hah[j]<<endl;
    }
    
 } 
    return 0;
}