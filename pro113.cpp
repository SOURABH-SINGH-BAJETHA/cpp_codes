#include<iostream>
using namespace std;

int sum(int *arr,int n){
    
    //base case
    if(n==0){
        return 0;                  //1,2,3
    }

    else if(n==1){

        //cout<<arr[0];
        return arr[0];            //0,1,2
    }

    
 
    else{
      int  ans=sum(arr+1,n-1)+arr[0];//2,3,5
    }




   

}

int main(){
    
    int n,arr[50];

    cout<<"Enter range of array : ";
    cin>>n;

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int ans=sum(arr,n);

    cout<<"sum : "<<ans;




return 0;
}