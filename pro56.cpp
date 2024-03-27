#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    int n=1;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            int ans=n+j-1;
            cout<<ans;
            

        
        }
       cout<<endl;
    }

return 0;
}