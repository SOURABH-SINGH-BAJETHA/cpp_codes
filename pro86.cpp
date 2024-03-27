#include<iostream>         //element search ny binary search--->
using namespace std;

int binary_search(int arr[],int key,int n){
    int start=0;
    int end=n-1;


    int mid=(start+end)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
           
        }
        else{
            start=mid+1;
        }
         mid=(start+end)/2;

    }
    return -1;
}

int main(){
    int arr[50],i,n,key;

    cout<<"enter number of element array : ";
    cin>>n;

    cout<<"enter the element in array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter element you want to search : ";
    cin>>key;
    
    int index=binary_search(arr,key,n);

    cout<<"index of "<<key<<" is : "<<index;





return 0;
}