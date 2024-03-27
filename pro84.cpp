#include<iostream>//sum of pair ----queation
using namespace std;

int main(){
     int n,i,j,arr[50],a;
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
            if((arr[i]+arr[j])==a){
                cout<<"the pair of number are : "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }

return 0;
}