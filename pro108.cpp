#include<iostream>
using namespace std;// using dynamic memory allocation.
  
   //sorting by dynamic memory allocation.

void my_sort(int *p,int & n){

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*(p+j)>*(p+j+1)){
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}


int main(){

    int n;
    cout<<"Enter size : ";
    cin>>n;

    int *arr= new int[n];            //dynamic memory allocation 

    cout<<"enter element in arrAY : ";

    for(int i=0;i<=n-1;i++){
        cin>>*(arr+i);
    }

    my_sort(arr,n);

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"  ";
    }

    delete []arr;





return 0;
}