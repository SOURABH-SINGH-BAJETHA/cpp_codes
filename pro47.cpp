#include<iostream>
#include<math.h>
using namespace std;

int power(int x,int y){
    return (pow(x,y)); 
}

int main(){

    int a,b;
    cout<<"enter number : ";
    cin>>a;

    cout<<"enter power of number : ";
    cin>>b;

    cout<<"the power of the number is : "<<power(a,b);





return 0;
}