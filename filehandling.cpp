#include<fstream>
#include<iostream>
using namespace std;

int main(){
    
        ofstream fout;
        fout.open("test.txt",ios::out|ios::in);
        fout<<" hello Aadarsh"; //this object in write in contest in 0th position to content lenth-1 and other content is asities in this funstion.....
       fout.close();
         

    return 0;
}