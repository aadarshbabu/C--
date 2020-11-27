#include<iostream>
using namespace std;

class test{

    private:
        int length;
        int breath;
        int hight;
        public:
        void setDimantion(int length, int breath, int hight)

        {
            this->length=length;
           this-> breath=breath;
           this-> hight=hight;

        }

        void showDimantion(){
            cout<<"The lenght is "<<length<<endl;
            cout<<"The breath is "<<breath<<endl;
            cout<<"The Hight is "<<hight<<endl;

        }
        ~test(){
            this->breath=0;
            this->hight=0;
            this->length=0;
            cout<<"The hight is"<<endl<<breath<<endl<<"The hight is"<<hight<<"The hight is"<<endl<<length;
        }


};



int main(){
    test setvalue;
    setvalue.setDimantion(454,44,12);
    setvalue.showDimantion();

    return 0;
}