#include<iostream>
using namespace std;

int binarysearch(int arr[10][10],int row,int col,int key){
     int i,j,startrow,startcol;
    startrow=0;
    startcol=col-1;
    
    
    while(startrow<row &&startcol>=0){
        
        if(key==arr[startrow][startcol]){
            return 1;
        }
        else if(key>=arr[startrow][startcol]){
            startrow++;
        }
        else{
            startcol--;
        }     
        
    }
    return 0;
}

int main(){
    int arr[10][10],row,col,i,j;

    cout<<"enter size of row : ";
    cin>>row;

    cout<<"enter size of col : ";
    cin>>col;

    cout<<"enter element of array : "<<endl;                          //MUST BE SOTRTED ROW AND COLOUMN WISE BOTH:-->                  
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<" array REQD : "<<endl;                            
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the number you want to search : ";
    int key;
    cin>>key;

   int ans= binarysearch(arr,row,col,key);

   if(ans==1){
    cout<<"element found ";

   }
   else{
    cout<<"element not found ";
   }

return 0;
}