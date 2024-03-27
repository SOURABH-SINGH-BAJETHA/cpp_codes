#include<iostream>//sum of pair ----queation
using namespace std;

int main(){
     int n,i,j,arr[50],a,k;
    cout<<"enter number of element in array  : ";
    cin>>n;

    cout<<"enter element of array : ";
    for(i=0;i<n;i++){

        cin>>arr[i];
    }
    cout<<"enter number : ";
    cin>>a;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
            if((arr[i]+arr[j]+arr[k])==a){
                cout<<"the triplet of number are : "<<arr[i]<<" , "<<arr[j]<<" and  "<<arr[k]<<endl;
            }}
        }
    }

return 0;
}