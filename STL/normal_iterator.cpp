
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
vector<int> v;
  cout << "How many value you have enter";
  int value;
  cin >> value;
  for (int i = 0; i < value; i++)
  {
    int value;
    cout << "Enter the value to in ter you vector";
    cin >> value;
    v.push_back(value);
  }


  vector <int> :: iterator it; // normal iterator....

    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<(*it)<<endl;
    }

}