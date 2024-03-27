#include<iostream>
#include<math.h>

using namespace std;                                   // thrash code;;;;;;;;;;;;;;;;;;;;;;;;;;

int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;//101
    int ans;
   // int digit=0;
    int i=0;
    ans=0;
    int digit;
    int min=pow(-2,31);
    int max=pow(2,31);


   while(n!=0){
       //  bit=n&1;//101 1
       //thrash code.g......................
       digit=n%10;
       ans= (ans * 10 ) + digit;
       n=n/10;
           
     }

     if(ans>INT32_MAX/10||ans<INT32_MIN/10){

        return 0;
     }
     cout<<ans;
return 0;
}