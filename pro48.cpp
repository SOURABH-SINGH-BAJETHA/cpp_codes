#include<iostream>
//#include<math.h>
using namespace std;

int power(int x,int y){

    int ans=1;
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }

    return ans; 
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