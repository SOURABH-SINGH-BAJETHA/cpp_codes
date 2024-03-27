#include<iostream>
using namespace std;

int main(){
    int a,s,sum;
    cout<<"enter  starting number :";
    cin>>s;
    cout<<"enter termination number : "<<endl;
    cin>>a;
    sum=0;
    
    if(s%2==0){

    for(int i=s;i<=a;i=i+2){//i=0;i=i+2
        
    sum=sum+i;
        
       

    }
     cout<<sum<<endl;
    }
    else{
        cout<<"not an even number ";
    }

        

return 0;
}