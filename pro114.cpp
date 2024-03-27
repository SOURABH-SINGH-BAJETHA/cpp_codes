/* search of array using recursive function */

#include<iostream>
using namespace std;             

bool linear_search(int *arr,int n,int key){

    //base case;
    int ans;
    if(n==0){
        return false;
    }

    else if(key==arr[0]){
        return true;
    }
    
    
    else{

         ans=linear_search(arr+1,n-1,key);
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

    bool ans = linear_search(arr,n,key);

    if(ans==1){
        cout<<"Element is present "<<endl;

    }

    else{
        cout<<"Absent ";
    }



return 0;
}