#include<iostream>
using namespace std;//sorting using function...

void sorting(int arr[],int n){
    int i,j,temp;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,i,arr[50],ans;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter the element in the array : ";
    for(i=0;i<=n-1;i++){
        cin>>arr[i];

    }

    sorting(arr,n);
    cout<<"the sorted array is : ";
     for(i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";

    }

return 0;
}