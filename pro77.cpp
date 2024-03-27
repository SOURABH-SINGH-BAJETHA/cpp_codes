#include<iostream>
using namespace std;
int binary_search(int key, int arr[], int n){
    int mid,start,end;
    start=0;
    end=n-1;

    mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start + end)/2;

        
    }
    return -1;
    

}

int main(){
    int i,arr[50],key,n,index;

    cout<<"enter size of array : ";
    cin>>n;
     
    cout<<"enter element of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element you have to search : ";
    cin>>key;

    index=binary_search(key,arr,n);

    cout<<"element found at index "<<index;




return 0;
}