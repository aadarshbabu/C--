
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printpair(vector<pair<int,char> > &v1);
int main(){

        vector<pair<int,char> > v1; // ={ {11,'a'}, {2,'b'},{23,'x'},{4,'z'}};
        int value;
        char val;
        int n;
        cout<<	"enter the value"; 
        cin>>n; 
        for (int i = 0; i < n; i++)
        {
           cout<<"Enter the value";    
            cin>> value>>val;
         v1.push_back({value,val});   /* code */
        }
        
        swappair(v1);
    printpair(v1);

    return 0;
}


void printpair(vector< pair<int,char> > &p1)
{
    for (int i = 0; i < p1.size(); i++)
    {
     cout<<p1[i].first<<p1[i].second<<endl;
    }
    


}