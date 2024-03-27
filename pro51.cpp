#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    char ch='A';

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
             ch++;

        }
       cout<<endl;
    }

return 0;
}