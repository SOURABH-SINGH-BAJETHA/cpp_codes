#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"enter number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<"it is a prime number for "<<i<<endl;
        }
        else{
            cout<<"a composite number for "<<i<<endl;
        }



    }



return 0;
}