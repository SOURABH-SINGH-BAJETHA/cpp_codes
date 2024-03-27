
//SWAPING BY USING VOID SWAP: 

#include<iostream>
using namespace std;

void   swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;// we don't have to write return in void function.

    
}

int main(){
    int a,b;
    cout<<"the value of a:";
    cin>>a;
    cout<<"\nthe value of b:";
    cin>>b;
    cout<<"so BEFORE SWAPING, the value of 'a' :"<<a<<" & value of 'b' is "<<b<<endl;
 swap(a,b);
 cout<<"AFTER SWAPING , the value of 'a' :"<<a<<" & the value of 'b' is "<<b<<endl;


return 0;
}