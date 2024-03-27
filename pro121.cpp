#include<iostream>
using namespace std;

int partition(int *arr,int s ,int e){

    int count=0;
    int ans=arr[s];

    for(int i =s+1;i<=e; i++){

        if(arr[s]>=arr[i]){
            count++;
        }
    }

    int pivot = count +s;
    swap(arr[pivot],arr[s]);
   
    
    int i,j;
    i=s;
    j=e;

    while(i<pivot && j>pivot){
        while(arr[i]<ans){
            i++;
        }
        while(arr[j]>ans){
            j--;
        }
        if(i < pivot && j >pivot){
            swap(arr[i++],arr[j--]);
        }



    }
    return pivot;




}

void quick_sort(int *arr,int s, int e){

    //base case : 
    if(s>=e){
        return ;
    }

    //partition : 
    int p = partition(arr,s,e); 

    //left part sort : 
    quick_sort(arr,s,p-1);

    //right part sort : 
    quick_sort(arr,p+1,e);


}

int main(){

    int arr[50];
    int n;

    cout<<"Enter Range : ";
    cin>>n;

    cout<<"Enter the element : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1);

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"     ";
    }

return 0;
}