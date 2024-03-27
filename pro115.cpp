/*searching of array through binary search and recursive function */

#include<iostream>
using namespace std ;

bool binary_search(int *arr,int start,int end,int key){

    //base case :
    
    
    if(start>end){
        return false;
    } 

    bool ans;
    int mid=(start+end)/2;

    //if mid is equal to key 
    if(arr[mid]==key){
        return true;
    }


    
    //if mid is greater then key
    if(arr[mid]>key) {

       ans= binary_search(arr,start,mid-1,key);
    }

    //if mid is smaller then key

    else{
       ans= binary_search(arr,mid+1,end,key);
    }

    return ans;
}

int main(){

    int n,arr[50],key;
   
    cout<<"Enter range : ";
    cin>>n;

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter key : ";
    cin>>key;

    int start=0;
    int end=n-1;

    bool ans= binary_search(arr,start,end,key);

    if(ans==1){
        cout<<"element Present ";

    }
    else{
        cout<<"Absent ";
    }

return 0;
}