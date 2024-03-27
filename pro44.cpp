#include<iostream>
using namespace std;

int main(){
    int a,b,num;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;

    cout<<"click 1 for : + "<<endl;
    cout<<"click 2 for : - "<<endl;
    cout<<"click 3 for : * "<<endl;
    cout<<"click 4 for : / "<<endl;

    cin>>num;

    switch(num){
        case 1 : cout<<"the sum of the numbers are : "<<(a+b); break;
        case 2 : cout<<"the sum of the numbers are : "<<(a-b); break;

        case 3 : cout<<"the sum of the numbers are : "<<(a*b);break;
        case 4 : cout<<"the sum of the numbers are : "<<(a/b);break;

        default : cout<<"wrong format ";

    }

return 0;
}