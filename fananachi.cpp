#include<iostream>
using namespace std;
int fab(int x)
{
    if(x==1||x==2)
    return x;
    else{
    return(fab(x-1)+fab(x-2));
    }
}
int main(){

    cout<<"test"<<endl;
    int x=0;
    // cin>>x;
   int res; 
   for(x=1;x<=10;x++)
   {
   res=fab(x);
   cout<<"The fab is ress.. "<<res<<endl;
   }
    return 0;
}
