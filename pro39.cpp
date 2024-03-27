#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;

    int prime;
    

    for(int i=2;i<a;i++){//prime =..1 2 3 4 5 6 :7

          if(a%i==0){
          //  cout<<"composite number" <<endl;
            prime=0;
            break;
            }


    }
    if(prime==0){
        cout<<"composite"<<endl;

    }
    else{
        cout<<"prime";
    }



return 0;
}