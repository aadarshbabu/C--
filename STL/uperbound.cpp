#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// uperbound bound function is created in first occurance of the value...
// its search the value in lon(n) complexty...
int main(){
    
    // lower bound is only apply in vector is sotert form...
    vector<int> arr={22,334,5,4,66,5,5,4,4,7,4}; 
    vector<int>::iterator it;

        sort(arr.begin(),arr.end());   // arr.begin()  and arr.end() also the iterator...
    for(auto &value:arr)
        {
            cout<<value<<" ";
        }
        cout<<endl;

        auto lowB= lower_bound(arr.begin(),arr.end(),4); //lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.

        auto upperB= upper_bound(arr.begin(),arr.end(),5);  
        // upper_bound returns an iterator pointing to the first element in the range [first to last) which has a value greater than ‘value

        // how many same value present in the vactor..

        cout<<(*lowB)<<endl;
        cout<<(*upperB)<<endl;
    cout << "lower_bound for 4 at position "
         << (lowB - arr.begin() + 1) << '\n';

             cout << "upper_bound for 5 at position "
         << (upperB - arr.begin()+1) << '\n';
       
        // for(auto &value:arr)
        // {
        //     cout<<value<<" ";
        // }



  


    return 0;
}