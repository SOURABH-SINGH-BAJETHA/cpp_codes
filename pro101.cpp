#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,arr[10][10],arr2[10][10];
    cout<<"enter size of array : ";//matrix must be sq :             //90 DEGREE ROTATE
    cin>>n;

    cout<<"enter the element of array : "<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"earlier matrix : "<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"after 90 degree turn  : "<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j =0;j<=n-1;j++){
            arr2[j][n-1-i]=arr[i][j];
            
        }
        
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr2[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    
    
    
  

return 0;
}