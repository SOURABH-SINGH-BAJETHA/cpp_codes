#include<iostream>
using namespace std;
class marks{

    private:// note never put 'private:' in below line,kyu ki fir
          int d,e;//--VOID GOOD or VOID print bhi private bn jata h
     
     public:
          int a,b,c;
     

          void good(int d1, int e1);
          void print(){
            cout<<"marks of student a : "<<a<<endl;
            cout<<"marks of student b : "<<b<<endl;
            cout<<"marks of student c : "<<c<<endl;
            cout<<"marks of student d : "<<d<<endl;
            cout<<"marks of student e : "<<e<<endl;
          }

};
void marks :: good(int d1, int e1){
    d=d1;
    e=e1;
}

int main(){
    marks sourabh;
    sourabh.a=55;
    sourabh.b=32;
    sourabh.c=23;
    sourabh.good(10,12);
    sourabh.print();

return 0;
}