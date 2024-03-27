#include<iostream>
using namespace std;

class student{
     private :
     int per;
     public :
     char section;
    

     void setper(int p){
        per = p;
     }
     int getper(){
        return per;
     }

};

int main(){

    student s1;

    s1.section='A';
    s1.setper(70);

    cout<<"section : "<<s1.section<<endl;
    cout<<"percent : "<<s1.getper()<<endl;



return 0;
}