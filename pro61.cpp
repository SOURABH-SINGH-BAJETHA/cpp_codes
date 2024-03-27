#include<iostream>
using namespace std;

int check(int x ){
    
    if(x%2==0){
        return 0;

    }
    else{
       return 1;
    }
   
}

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;

    cout<<check(a);//if even=0; if odd =1;



return 0;
}