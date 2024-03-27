#include<iostream>
using namespace std;

int main(){
    int a,b,i,arr1[50],arr2[50],j,ans=0;
    cout<<"enter number in  array : ";//number should be in format : --  2,1,2,3,4,3,4;
    cin>>a;
   
    cout<<"enter array numbers in  array : ";


    for(i=0;i<=a-1;i++){
        cin>>arr1[i];
    }
    
    for(i=0;i<=a-1;i++){
        
        ans=ans^arr1[i];
        }
    
    cout<<"the unique ans is : " << ans;


return 0;
}