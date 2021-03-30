#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

/*int main()
{   
        char ch;
        ifstream fin; // when you read data id file create ifstream object...
        fin.open("check.txt"); // open the file in read mode defult..

        fin>>ch; // read the charector in file and increment the get pointer. get pointer is point to next charector...
        fin>>ch;// read the charector... 
        fin>>ch;// read the charector...
        fin>>ch;// read the charector...
        fin>>ch;// read the charector...
        int pos=fin.tellg(); // tellg is a function is return the get pointer index posintion.
        cout<<pos<<endl;
        cout<<ch;
}
*/
int main()
{
    
    ofstream fout;
    fout.open("check.txt",ios::app); // open the file in append mode..
    int pos=fout.tellp();// initially put pointer last index of charector..
    cout<<pos<<endl;// thatsway pos of tellp is 0
    fout<<"hello Aadarsh singh"; // input the vlaue in file..
    pos=fout.tellp();// read every charactor in file and count them.. return the how many charactor you write the file..
    cout<<pos<<endl;// return the no of charector you input or next time you input the value. value append in posintion character
    fout.close();// close the file..
    

}