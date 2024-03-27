#include<iostream>
using namespace std;
int check(int a){
    int i=2;
    
    while(i<a){
        if(a%2==0){
            return 1;
        }
        else{
            return 0;
        }
        i++;

    }
}

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;

    cout<<"the number is "<<check(a);//prime=0  ....  compostie=1;

return 0;
}