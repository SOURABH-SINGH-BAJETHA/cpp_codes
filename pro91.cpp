#include<iostream>
#include<math.h>
using namespace std;

long int binary_search(int a , int arr[], int n){
    int i,start,end,mid;
       start=0;
        end=a;
        
        mid=start+ (end-start)/2;

    while(start<=end){

        if(mid==sqrt(a)){
            return mid;

        }

        else if (mid>sqrt(a)){
            end=mid-1;

        }
        else{
            start=mid+1;
        }
     
        mid=start+ (end-start)/2;

        
    }
   // return mid;
}

int main(){
    int n,arr[50],index,a,i;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter element of array : ";              //array must be in the form of 0,1,2,3,4,...wihtout any absencce of whole number

    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    cout<<"enter number : ";
    cin>>a;

    index=binary_search(a,arr,n);

    cout<<"the sq root of "<<a<<" is "<<index;




return 0;
}