
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printVactor(vector<vector<int> > &v) // this vactor passing by reference...
{
    cout << "size of vactor" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"size of vector"<<v[i].size()<<endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
           cout<<" "<<endl;
    }
}

int main()
{

    vector<vector<int> > V;  // vector inside a vector in like two dimantion array;  
    // its vector insede vector. 
    cout << "How many value insert into a vactor";
    int n;
    cin >> n;


        V.push_back( vector<int> ());// first inslized the empty vactor ...
    for (int i = 0; i < n; i++)
    {
        int noofvalue;
        cout << "How many value input inside the vactor";
        cin >> noofvalue;
       vector<int> temp;
        for (int j = 0; j < noofvalue; j++)
        {
            int value1;
            cout << "Enter The Value";
            cin >> value1;
            V[i].push_back(value1);// second method to put the value into the vactor..
            // temp.push_back(value1);
        }
       V.push_back(temp);
    }
    printVactor(V);
    return 0;
}