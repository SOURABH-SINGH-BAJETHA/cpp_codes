#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    

    for(int i=1;i<=a;i++){
        for(int j=a-i+1;j;j--){
            cout<<" * ";
           

        }
       cout<<endl;
    }

return 0;
}