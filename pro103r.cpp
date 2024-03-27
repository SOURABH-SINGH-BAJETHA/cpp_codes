#include<iostream>
using namespace std;

int binary_search(int arr[10][10],int row,int col,int key){    //revision of the code  : 103.cpp
    int srow=0;
    int scol=col-1;

    while(srow<=row&&scol>=0){
        if(key==arr[srow][scol]){
            return 1;
        }
        else if(key<=arr[srow][scol]){
            scol--;
        }
        else{
            srow++;
        }

    }
    return -1;
    
}

int main(){
    int n,arr[10][10];
   
    
    int row,col;
    cout<<"enter the size of row : ";
    cin>>row;

    cout<<"enter the size of coloumn : ";
    cin>>col;

    for(int i=0;i<=row-1;i++){
        for(int j =0;j<=col-1;j++){
        cin>>arr[i][j];
        }
    }

    int key;
    cout<<"enter the element to search : ";
    cin>>key;

    int ans=  binary_search(arr,row,col,key);

    if(ans==1){
    cout<<"element found ";

    }
    else{
    cout<<"not found ";
    }


return 0;
}