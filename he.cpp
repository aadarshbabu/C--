
// #include<stdio>
#include<iostream>
using namespace std;
class book{
    private:
    int bookid;
    char title[30];
    float prise; 
   public:
    void input()
    {
        cout<<"enter a Bookid , Book name , and Prise";
        cin>>bookid;
        // cin>>title;
        gets(title);
        cin>>prise;
    }

    void output()
    {   
        // cout<<"book name "<<endl<<(title);
        puts(title);

        cout<<"\n book id"<<endl<<bookid<<"  prise= "<<endl<<prise;

    }  
};

void input();
void output();
int main(){
    // cout<<" HELLO WORLD HII how are you doind   ";
  book b1;
    // b1.name="hello world "

    b1.input();
    b1.output();
    return 0;
}                       