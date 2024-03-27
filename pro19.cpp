#include<iostream>
using namespace std;

int main(){
    int n,q,bill,balance;
    cout<<"enter number of cartoons : "<<endl;
    cin>>n;
    cout<<"number of kg seller have: "<<endl;
    cin>>q;
    if(q>=50){
    
    bill=n*50*60;

    balance=(q*60)-bill;
    cout<<"bill :"<<bill<<endl;
    cout<<"balance :"<<balance;}

    else{
        cout<<"the bill is :0";
    }




return 0;
}