#include<iostream>
using namespace std;

template<class z >

z setdata(z a, z b){
  cout<<(a+b);
  return(a);
}







int main(){
    
    cout<<setdata(1,2);
    return 0;
}