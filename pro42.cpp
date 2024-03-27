#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter number : "<<endl;
cin>>n;
int bit;
int mask=0;
int i=1;
while(n!=0){

    bit=~n;
    mask=(mask<<1)|1;
    n=n>>1;

}
int ans=bit&mask;
cout<<ans;
return 0;
}