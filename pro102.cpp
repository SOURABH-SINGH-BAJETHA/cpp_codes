#include<iostream>
using namespace std;                                  //BINARY SEARCH IN 2D ARRAY : --->LEVEL 1

int binarysearch(int arr[10][10],int key,int row ,int col){
    int start,end,mid;

    start=0;
    end=(row*col)-1;

    mid=(start+end)/2;

    while(start<=end){
        if(key==arr[mid/col][mid%col]){
            return 1;
        }

        else if(key>arr[mid/col][mid%col]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return 0;

}

int main(){
    int arr[10][10],i,j,row,col;
    
    cout<<"enter array row : ";
    cin>>row;

    cout<<"enter array col : ";
    cin>>col;

    cout<<"enter the element of array : "<<endl;

    for(i=0;i<=row-1;i++){
        for(j=0;j<=col-1;j++){
            cin>>arr[i][j];           // array must be in soterd form 
        }
    }

    cout<<"the reqd arrAY : "<<endl;   

    for(i=0;i<=row-1;i++){
        for(j=0;j<=col-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;

    cout<<"enter the number to search : "<<endl;
    cin>>key;

  int result=  binarysearch(arr,key,row,col);

  if(result==1){
    cout<<"element found ";
  }
  else{
    cout<<"element not found ";
  }

return 0;
}