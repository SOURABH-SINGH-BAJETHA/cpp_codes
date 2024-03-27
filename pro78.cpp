#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i,j,max,min,smax,smin;
    cout<<"enter number : ";
    cin>>n;
    cout<<"enter array : ";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<"  "<<endl;
    }
    max=arr[0];min=arr[0];
    //;smin=0;
    for(i=2;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];

        }
        if(min>arr[i]){
            smin=min;
            min=arr[i];

        }
    }
    cout<<"max is : "<<max<<endl;
    cout<<"min is : "<<min<<endl;
    cout<<"second max : "<<smax<<endl;
    cout<<"second min : "<<smin<<endl;


return 0;
}