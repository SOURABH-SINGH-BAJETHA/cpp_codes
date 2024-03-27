#include<iostream>
using namespace std;

int main(){
    int a,b,arr[50],i,temp;
    cout<<"enter number : ";
    cin>>a;
    cout<<"enter number in array : ";
    for(i=0;i<=a-1;i++){
        cin>>arr[i];
        cout<<" ";

       
    }
    for(i=1;i<=a;i=i+2){
        temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;

    }
    for(i=0;i<=a-1;i++){
        cout<<arr[i]<<" ";  
    }

return 0;
}