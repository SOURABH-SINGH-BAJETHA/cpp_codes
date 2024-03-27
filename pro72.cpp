#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;

    for(int i=1;i<=a;i++){
        for(int j=a-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
       
    }
    for(int x=1;x<=a;x++){
         for(int m=1;m<=x;m++){
            cout<<" ";
        }
        for(int l=2*(a-x)-1;l>=1;l--){
            cout<<"*";

        }
        cout<<endl;
    }

return 0;
}