#include<iostream>
#include<string.h>              // shallow copy and deep copy : 
using namespace std;

class student{

    public :
    char *name;
    int rn;
    char section;

    student(){
        cout<<"default constructer called "<<endl<<endl;
        name = new char[100];  //dynamically allocated
    }

    void print(){
        cout<<"name : "<<name<<endl;
        cout<<"roll no. : "<<rn<<endl;
        cout<<"section : "<<section<<endl;
    }

    void setname(char name[100]){
        strcpy(this->name,name);
    }

    

};

int main(){

    student s1;
    char name[8] = "sourav";
    s1.setname(name);
    s1.rn = 74;
    s1.section = 'A';


    student s2(s1);

    s1.print();
    cout<<endl<<endl;
    s2.print();
    cout<<endl<<endl;

    s1.name[0]='g';

    s1.print();
    cout<<endl<<endl;
    s2.print();



return 0;
}