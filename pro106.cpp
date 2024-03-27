#include<iostream>
using namespace std;       // cpp program to print an array using pointer ---->

int main(){

    int n,i,arr[50],*p;

    cout<<"enter size of array : ";
    cin>>n;

    p=arr;

    for(i=0;i<=n-1;i++){
        cin>>*(p+i);
    }

    cout<<"array : "<<endl;
    for(i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }


    

return 0;
}