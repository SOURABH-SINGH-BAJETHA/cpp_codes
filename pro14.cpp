#include<iostream>
using namespace std;

class animals{

    private:
      int a,b,c;

      public:
       int d,e,f;

       void domestic(int a1,int b1,int c1);
       void wild(){
        cout<<" animal a is "<<a<<endl;
        cout<<" animal b is "<<b<<endl;
        cout<<" animal c is "<<c<<endl;
        cout<<" animal d is "<<d<<endl;
        cout<<" animal e is "<<e<<endl;
        cout<<" animal f is "<<f<<endl;
       }
       
};
void animals :: domestic(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;}



int main(){

    animals jungle;
    jungle.d=1;
    jungle.e=2;
    jungle.f=3;
     
     
     jungle.domestic(4,5,6);
     jungle.wild();
          

    


return 0;
}