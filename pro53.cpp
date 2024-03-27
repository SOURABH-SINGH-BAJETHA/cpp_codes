#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    

    for(int i=1;i<=a;i++){
        for(int j=a-i;j;j--){
            
            cout<<"_ ";
           

        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
       cout<<endl;

    }

return 0;
}