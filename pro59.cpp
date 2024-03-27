#include<iostream>
using namespace std;

int main(){
    int a,i=1,sum=0;
    cout<<"enter number of even numebr you want to print :  ";
    cin>>a;
    int j=0;

    while(i<=a){
        j=j+2;
        sum=sum+j;
        i++;
    }
    cout<<sum;

return 0;
}