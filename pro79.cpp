#include<iostream>
using namespace std;

int main(){
    int n,p=0,q=1,next;
    cout<<"enter number : ";
    cin>>n;
    if(n>=2){
    cout<<p<<"  ";
    cout<<q<<"  ";
    }
    else{
        cout<<p;

    }

    for(int i=1;i<=n-2;i++){
        next=p+q;
        p=q;
        q=next;

        cout<<next<<"  ";

    }

return 0;
}