#include<iostream>
#include<string.h>
using namespace std;

void reverse(string& arr,int i,int j){
     
     //base case
     if(i>j){
        return ;
     }

      //processing  
      swap(arr[i],arr[j]);
       
          
    
      //recursive  relation
        reverse(arr,i=i+1,j=j-1);
    

}

int main(){

    string str={" hello"};
    int i,j;

    
    i=0;
    j=str.size();
    

    reverse(str,i,j);

    cout<<"reverse : ";
    
    cout<<str;
    

return 0;
}