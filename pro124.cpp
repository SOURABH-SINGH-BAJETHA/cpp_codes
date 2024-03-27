#include<iostream>
using namespace std;

class student{

    private :
    int age;
    public : 
    char section;

    student(int age,char section){
        this -> age = age;
        this ->section = section;
    }

    void print(){
        cout<<"parameterished constructer called "<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"section is : "<<section<<endl;
    }

    // void setage(int age){
    //     this -> age = age;
    // }

    // int getage(){
    //     return age;
    // }

    


};

int main(){

    student s1(18,'A');
    s1.print();

    student s2(s1);
    s2.print();
   // s1.setage(18);
   // cout<<"age is : "<<s1.getage()<<endl;

    
    



return 0;
}