#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    int fact=1,sum=0;

    for(int i=1;i<=a;i++){

        fact=fact*i;                                   // 
        sum=sum+fact;




    }
    cout<<"the sum of the series : "<<sum;

return 0;
}