#include<iostream>
using namespace std;

int main(){
    int i;
    int a;
    int arr[50];

cout<<"enter number : ";
cin>>a;
cout<<"enter the element of array : ";
    for(i=0;i<=a-1;i++){
        cin>>arr[i];
    }
    for(i=0;i<=a-1;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int b;
    cout<<"row : "<<endl;
    cin>>b;
    cout<<arr[b];
    


return 0;
}