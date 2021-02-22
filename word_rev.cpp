#include<iostream>
#include<bits/stdc++.h>
#include "string_rev.cpp"
using namespace std;

int findwordsaprator(string name)
{
    for(int i=0; i<=name.size()-1; i++)
    {
        if(name[i]==' ')
            return i;
    }

}

string swapword(int saprator, string name){
        // swap(name[i],name[saprator+i]);
    string swapword;

    for(int fstring=0, i=0; i<=name.size(); i++)
    {
        if(saprator <= (name.size()-1))
        {
        swapword.push_back(name[saprator++]);
            if(saprator==name.size())
               swapword.push_back(' ');       
        }
        else 
        {
       
            if(name[fstring] != ' ')
            {
              swapword.push_back(name[fstring]); 
              fstring++;
            }
            else{
                return swapword;
            }
        }
        
    }
    return "0"; 
}


int main(){

    string name;
    cout<<"Enter a equal string  ";
    getline(cin,name);
   int saprator= findwordsaprator(name);
   string revword=swapword(saprator,name);
   cout<<revword;
    return 0;
}