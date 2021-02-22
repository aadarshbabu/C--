#include<iostream>
using namespace std;

class Account{
    private:
    float balance;
    float IntrestPerYear;
    static float Intreste;
    public:
    void set_ballance(int bal)
    {
        balance=bal;
    }
    void IntresteCreadit()
        {
            IntrestPerYear=((balance*Intreste)/100);
        }
    void IntrestPA()    
    {
        cout<<"You Intrest one year In "<<IntrestPerYear<<endl;
    }
    void IntrestPM()
    {
        cout<<"Your intrest per Month "<<IntrestPerYear/12.0<<endl;
    }

};

    float Account::Intreste=4.0f;
    int main()
    {
        cout<<"enter Your Amount Balance";
        int balance;
        cin>>balance;
        Account a1,a2;
        a1.set_ballance(balance);
        a1.IntresteCreadit();
        a1.IntrestPA();
        a1.IntrestPM();
        a2.set_ballance(3000);
        a2.IntresteCreadit();
        a2.IntrestPA();
        a2.IntrestPM();
    }



