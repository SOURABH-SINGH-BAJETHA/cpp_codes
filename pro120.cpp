#include<iostream>
using namespace std;           //merge sorting 

void merge(int *arr,int s,int e){
    
    int mid=(s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second= new int[len2];

    int k=s;
    for(int i=0;i<=len1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<=len2;i++){
        second[i]=arr[k++];
    }

    //merge two sorted array : 
    int index1=0;
    int index2=0;
    k=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]= first[index1++];


        }
        else{
            arr[k++]=second[index2++];
        }
    }

    while(index1 < len1){
        arr[k++]= first[index1++];

    }
  
    while(index2 < len2){
        arr[k++]= second[index2++];

    }

}

void merge_sort(int *arr,int s,int e){

    //base case
    if(s>=e){
        return ;
    }

    int mid=(s+e)/2;
    
    //left part : 
    merge_sort(arr,s,mid);

    //right part : 
    merge_sort(arr,mid+1,e);

    

    //merge : 
    merge(arr,s,e);



}

int main(){

    int n,arr[50];

    cout<<"Enter range  : ";
    cin>>n;
    
    cout<<"Enter element : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"   ";
    }



return 0;
}