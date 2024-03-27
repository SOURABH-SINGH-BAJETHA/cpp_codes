#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    int count=1;

    for(int i=1;i<=a;i++){  //--->
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
            
        }
        cout<<endl;
    }

return 0;
}