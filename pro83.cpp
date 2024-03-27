#include<iostream>
using namespace std;

int main(){
    int n,i,j,arr[50];
    cout<<"enter number : ";
    cin>>n;

    cout<<"enter element of array : ";
    for(i=0;i<n;i++){

        cin>>arr[i];
    }
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                cout<<"the element which are repeated : "<< arr[i]<<endl;
            }
        }
    }



return 0;
}