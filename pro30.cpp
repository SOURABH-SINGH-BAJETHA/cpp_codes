#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter the number: ";

    cin>>a;
char ch;


    for(int i=1;i<=a;i++){
 
        for(int j=1;j<=i;j++){
            char ch='A'+i-1;
         cout<<ch;
         
          
        }
               cout<<endl;
    }

return 0;
}