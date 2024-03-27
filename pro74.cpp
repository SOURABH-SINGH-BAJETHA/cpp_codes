#include<iostream>
using namespace std;

int main(){
    int a,arr[100],i,j,temp;
    int max;
    cout<<"enter number of tym of loop : ";
    cin>>a;
    for(i=0;i<=a-1;i++){

        cin>>arr[i];
    }
    cout<<endl;
   
    max=arr[0];
    cout<<endl;
    for(i=0;i<=a-1;i++){
        for(j=0;j<=a-2;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
               arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            
        }
    }
     for(i=0;i<=a-1;i++){
        cout<<arr[i]<<endl;
    }



return 0;
}