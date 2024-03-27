#include<iostream>
using namespace std;

int binary_search(int arr[],int n){
    int ans=-1;
    int start=0;
    int end=n-1;
    int mid=(start + end )/2;
    int pivot;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start +end)/2; 
    }
   return mid;
}

int search_binary(int arr[],int index,int n,int key){
    
    if(key>=arr[index] && key<=arr[n-1]){
        int start=index;
        int end =n-1;
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
    }
    else if(key>=arr[0]&&key<=arr[index-1]){
        int start=0;
        int end =index-1;
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
}}

int main(){
     int n,i,arr[50],index,key,search;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter element of array : ";  //-----> REMEMBER THE ARRAY MUST BE SORTED as rotated form---like 7,8,1,2,3,4...
    for(i=0;i<n;i++){
        cin>>arr[i];  
    }
 
    index=binary_search(arr,n);
    // cout<<"the element is foyund at index : "<<arr[index];
    cout<<"enter number : ";
    cin>>key;
    search=search_binary(arr,index,n,key);

    cout<<"entered number is found at index : "<<search;

return 0;
}