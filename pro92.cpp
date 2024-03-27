#include<iostream>  // book allocation problem....
using namespace std;

int main(){
    int n,i,arr[50],sum1[50],sum2[50],j,sum3[50],min,max[50];
    cout<<"number of student are : 2"<<endl;

    cout<<"enter the number of book your want to add in array : ";
    cin>>n;

    cout<<"enter the number of pages in each book : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sum1[0]=0;

    for(i=0;i<=n-2;i++){
         sum1[i]=sum1[i]+arr[i];
    }

    sum2[0]=0;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-2;j++){
            sum2[i]=sum2[i]+arr[i+j];
        }     
    }

    //case : 1--
    max[0]=sum1[0];

    for(i=0;i<=n-2;i++){

        if(sum1[0]<sum2[i]){
            max[i]=sum2[i];
        }

        min=max[0];   
        
    }
     for(i=1;i<=n-2;i++){

        if(max[0]>max[i]){
            min=max[i];
        }
     }

    cout<<"the minimum sum is : "<<min;

return 0;
}