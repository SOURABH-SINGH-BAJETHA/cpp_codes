#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    cout<<"enter number : ";
    cin>>a;
    int ans;

    int i=0;
    while(i<=30){
        ans= pow(2,i);
        if(ans==a){
            cout<<"true";
            break;
            
        }

            
        
      
        
        i++;
    }
    if (ans!=a)
    {
        cout<<"false";/* code */
    }
    
      





return 0;
}