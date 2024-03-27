#include<iostream>
using namespace std;

int main(){

    int a,rem,b;
    int rev=0;
    cout<<"enter number : ";
    cin>>a;

    while(a!=0){
        rem=a%10;
        rev= rev*10+rem;  
        a=a/10;

    }
    
    
    
    while(rev%10!=0){
        b=rev%10;
        rev=rev/10;

        if(b==0){
            cout<<"zero";
        }

    if(b==1){
        cout<<"one ";
    }
    if(b==2){
        cout<<"two ";
    }
    if(b==3){
        cout<<"three ";
    }
      if(b==4){
        cout<<"four ";
    }
      if(b==5){
        cout<<"five ";
    }
      if(b==6){
        cout<<"six ";
    }
      if(b==7){
        cout<<"seven ";
    }
      if(b==8){
        cout<<"eight ";
    }
      if(b==9){
        cout<<"nine ";
    }

    

    }
    

        
    
    



return 0;
}