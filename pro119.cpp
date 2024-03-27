#include<iostream>
using namespace std;

void bubble_sort(int *arr,int n){

    //base case : 
    
    if(n==0||n==1){
        return ;
    }

    for(int i=0;i<=n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    return bubble_sort(arr,n=n-1);

}

int main(){

    int n,arr[50];

    cout<<"Enter range : ";
    cin>>n;
    
    cout<<"Enter element : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    

    bubble_sort(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"      ";
    }



return 0;
}