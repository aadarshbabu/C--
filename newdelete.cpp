#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Block in array";
    cin>>x;
    int *parray=new int[x];// this is Dynimic type array create a new keyword..
    // parray is a pointer to point this variable create new keyword..
    for (int i = 0; i <=x; i++)
{
    *(parray+i)=22*i+1;
    }
    for (int i = 0; i <=x; i++)
    {
        cout<<*(parray+i)<<endl;
    }


    delete[]parray;// delete array variable  point this parray pointer..
    

    cout<<" Dynimic type array is delete"<<endl;

    cout<<*(parray)<<endl;
    // point by parray pointer variable... 
   
    return 0;
}