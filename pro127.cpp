#include<iostream>            //code for unnderstanding instructer : 
using namespace std;

class human{
    public :
    int age;
    int hieght;
    int weight;

    void setage(int age){
        this -> age = age;
    }
};

class male : private human {

    public : 

    void setage(int age){
        this->age = age;

    }
    void print(){
    
        cout<<"age : "<<this -> age<<endl;
    }

};

int main(){

    male m1;
    m1.setage(15);
    m1.print();




    




return 0;
}