#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
    char ch;
    ifstream fin;
     fin.open("test.dat");
    //  fin>>ch;s
     ch=fin.get();
     
    while (!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }

    fin.close();
 
    return 0;
}