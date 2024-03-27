#include<iostream>
using namespace std;

int main(){
    int a,b,i,arr1[50],arr2[50],j,ans=0;
    cout<<"enter number in  array : ";//number should be in format : --  2,1,2,3,4,3,4;
    cin>>a;
   
    cout<<"enter array numbers in 1st array : ";

    for(i=0;i<=a-1;i++){
        cin>>arr1[i];
    }
    cout<<"enter array numbers in 2nd array : ";
    
    for(i=0;i<=a-1;i++){
        cin>>arr2[i];   
        }
    
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }


return 0;
}