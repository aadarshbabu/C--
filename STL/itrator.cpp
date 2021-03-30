

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v;
  cout << "How many value you have enter";
  int value;
  cin >> value;
  for (int i = 0; i < value; i++)
  {
    int value;
    cout << "Enter the value to inter you vector";
    cin >> value;
    v.push_back(value);
  }

// range base loop in iterator....

  for (auto data : v)
  {
    cout << data << endl;
  }

  return(0);
}