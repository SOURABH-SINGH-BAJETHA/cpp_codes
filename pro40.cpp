#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter number of times : ";
    cin>>a;
    int n;
    int sum=0;
    // cout<<"enter number : ";
    // cin>>n;
    for(int i=1;i<=a;i++){
        cout<<"enter number : ";
        cin>>n;
        sum=sum+n;
    }
    cout<<"the sum of "<<n<<" is : "<<sum;

return 0;
}