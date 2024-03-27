#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter money : ";
    cin>>a;

    int hundered,fifty,twenty,one;
    hundered=a/100;
    a=a%100;
    fifty=a/50;
    a=a%50;
    twenty=a/20;
    a=a%20;
    one=a;

    cout<<"hundered : "<<hundered<<endl;
    cout<<"fifty    : "<<fifty<<endl;
    cout<<"twenty   : "<<twenty<<endl;
    cout<<"one      : "<<one<<endl;


return 0;
}