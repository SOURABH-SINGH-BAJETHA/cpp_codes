#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;

    cout<<"click + for : + "<<endl;
    cout<<"click - for : - "<<endl;
    cout<<"click * for : * "<<endl;
    cout<<"click / for : / "<<endl;

    cin>>c;

    switch(c){
        case '+' : cout<<"the sum of the numbers are : "<<(a+b); break;
        case '-' : cout<<"the sum of the numbers are : "<<(a-b); break;

        case '*' : cout<<"the sum of the numbers are : "<<(a*b);break;
        case '/' : cout<<"the sum of the numbers are : "<<(a/b);break;

        default : cout<<"wrong format ";

    }

return 0;
}