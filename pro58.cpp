#include<iostream>
using namespace std;

int main(){
    int a,rev=0,rem,digit;
    cout<<"enter numeber : ";
    cin>>a;
    int temp=a;

    while(a!=0){
        digit=a%10;//123%10=3;   12%10
        rev=rev*10+digit;//0*10+3;
        a=a/10;//123/10=12;

    }
    if(rev==temp){
        cout<<"a pelendrom ";
    }
    else{
        cout<<"not a pelendrom";
    }

return 0;
}