#include<iostream>
using namespace std;

int first_element(int arr[],int key, int n ){
    int ans=-1;
    int start=0;
    int end=n-1;
    int mid=(start +end )/2;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else{
            start=mid+1;

        }
        mid=(start+end)/2;



    }

    return ans;

}

int last_element(int arr[],int key,int n){
       int ans=-1;
    int start=0;
    int end=n-1;
    int mid=(start +end )/2;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=start+1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else{
            start=mid+1;

        }
        mid=(start+end)/2;
    
}
return ans;
}

int main(){
    int n,i,j,key,arr[50],index1,index2;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter element of array : ";//-----> REMEMBER THE ARRAY MUST BE SORTED---like 1,2,3,3,4,4,5,6,7,9,9
    for(i=0;i<n;i++){
        cin>>arr[i];  
    }

    cout<<"enter element you want to search : ";
    cin>>key;

    index1=first_element(arr,key,n);
    index2=last_element(arr,key,n);

    cout<<"the index of first occurance is : "<<index1<<endl;
    cout<<"the index of last  occurance is : "<<index2;
  

return 0;
}