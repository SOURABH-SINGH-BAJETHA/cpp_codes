#include<iostream>
using namespace std;

int sum(int x,int y){

    return (x+y);
}

int main(){
    int a;
    int b;
    cout<<"enter 1st numbers:"<<endl;
    cin>>a;
    cout<<"enter 2nd numbers:"<<endl;
    cin>>b;
 
    // cout<<"the sum of 2 number:"<<sum(a,b)<<endl;
    int c;
    c=a % b;
    cout<<c;

return 0;
}