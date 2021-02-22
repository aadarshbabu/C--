#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findSumarray(int arr[], int lenght)
{
    if (lenght == 0)
        return 0;

    return arr[lenght] + findSumarray(arr, lenght - 1);
}

int main()
{
    
   int i=5; 

    while (i--)
    { 
        cout<<"Enter value";
        int value;
            cin>>value;
         int arr[value];
    for (int j = 1; j <=value ; j++)
          arr[j] = j;
        cout << findSumarray(arr, value) << endl;
    }

    return 0;
}