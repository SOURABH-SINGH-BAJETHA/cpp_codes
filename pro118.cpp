#include<iostream>         //power of a,
using namespace std;

int powerof(int a,int b){
    
    //base case : 
    
    if(b==0){
        return 1;
    }
    
    int ans=a*powerof(a,b=b-1);

    return ans;


}

int main(){
    
    int a,b;

    cout<<"Enter number : ";
    cin>>a;

    cout<<"Enter power : ";
    cin>>b;

    int ans = powerof(a,b);

    cout<<"value of a : "<<ans;

return 0;
}