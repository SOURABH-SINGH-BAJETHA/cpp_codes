#include<iostream>             //pelindrom by recursion
using namespace std;

bool pelindrom(string& str,int i,int j){
    
    //base case : 
    if(i>j){
        return true;
    }

    

    if(str[i]==str[j]){
        
        return pelindrom(str,i=i+1,j=j-1);
    }

    else{
        return false;
    }



}

int main(){

    string str={"madam"};

    int i=0;
    int j=str.size()-1;

   bool ans= pelindrom(str,i,j);
   

   cout<<"string : ";
   if(ans==1){
     cout<<"is pelindrom ";
   }
   else{
    cout<<"not a pelindrom";
   }

     

return 0;
}