#include<iostream>
using namespace std;

int binary_search(int arr[] ,int n){
   
    int start=0;
    int end=n-1;
    int mid=(start + end )/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
       
    }
    return mid;
}
int main(){
      int n,i,arr[50],index;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter element of array : ";  //-----> REMEMBER THE ARRAY MUST BE SORTED as rotated form---like 7,8,1,2,3,4...
    for(i=0;i<n;i++){
        cin>>arr[i];  
    }
    index=binary_search(arr,n);
    cout<<"the pivot element is : "<<arr[index];

    

return 0;
}
    

