#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n;
    cout<<"Enter size : ";
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];

    }

    cout<<"array : ";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";

    }
    
    int p;
    cout<<"\nenter position : ";
    cin>>p;
    
    int element;
    cout<<"Enter element : ";
    cin>>element;

    for(int i = n ; i>p ; i--){
        arr[i]=arr[i-1];
        
    }
    arr[p] = element;

    cout<<"\narray : ";
    for(int i = 0 ; i<=n ; i++){
        cout<<arr[i]<<"  ";

    }






return 0;
}