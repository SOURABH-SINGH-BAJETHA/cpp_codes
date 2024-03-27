
//OBEJECT ORIENTED PROGRAMING.-->CLASSES,PUBLIC, PRIVATE.

#include<iostream>
using namespace std;

class student{
    private:
         int a,b,c;
    public:
      int d,e,f;

     /* void jr(int a1, int b1, int c1){ --->we can write in this way or other as given.
        a=a1;
        b=b1;
        c=c1;
      }*/
      void jr(int a1, int b1, int c1);//like function prototype
      void print(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
        cout<<"the value of f is "<<f<<endl;
      }

};
void student :: jr(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){

student sourabh;
//sourabh.a=2---->this will throw error as we can not acess private var directly,we 
//can use it only by the alloted function in class.
sourabh.d=23;
sourabh.e=5;
sourabh.f=7;
sourabh.jr(1,6,9);
sourabh.print();


student ak;
ak.jr(45,14,12);
ak.print();



return 0;
}