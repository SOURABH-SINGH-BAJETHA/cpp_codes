#include<iostream>
using namespace std;//n!/n-r!;

int per(int x,int y){
    int i=1,j=1;
    int fact1=1;
   int fact2=1;
   int a=x-y;

   while(i<=x){
    
    fact1=fact1*i;
    i++;
   }
   while(j<=a){
    fact2=fact2*j;
    j++;
   }
   if(x>y){
    int permutation=fact1/fact2;
    return permutation;
   }
   else{
    return 0;
   }
   
   


}

int main(){
    int n,r;
    cout<<"enter n number : ";
    cin>>n;
    cout<<"enter r number : ";
    cin>>r;

    cout<<"permutation is : "<<per(n,r);
                                                                            

return 0;
}