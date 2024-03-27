#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;

    int i=1;
    for( ; ; ){
        if(i<=a){
            cout<<i<<endl;
            i++;
        }
        else{
            break;
        }

    }

return 0;
}