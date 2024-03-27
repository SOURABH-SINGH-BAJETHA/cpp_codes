#include<iostream>
#include<math.h>
using namespace std;

int power(int n){

    //base case 
    if (n==0){
        return 1;
    }
    
    // int cp=power(n-1);
    // int bp=pow(2,n)*cp;

    return  2*power(n-1);

}

int main(){

    int n,p;
    cout<<"Enter the power of 2 : ";
    cin>>n;

    p=power(n);

    cout<<"The value of power of 2 : "<<p<<endl;

return 0;
}