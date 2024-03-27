#include<iostream>
using namespace std;

int main(){

    int a,sod=0,rem;
    cout<<"enter number : ";
    cin>>a;
   int temp=a;

    while(a!=0){
        rem=a%10;
        sod=sod+rem*rem*rem;
        a=a/10;

    }
    
    if(sod==temp){
        cout<<"it is an armstrong number";
    }
    
    else{
        cout<<"else not an armstrong number ";
    }

return 0;
}