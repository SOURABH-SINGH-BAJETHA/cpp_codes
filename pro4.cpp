#include<iostream>
using namespace std;

int main(){
    int a[]={1,23,4,65,6};
    cout<<a[0]<<endl;
    int *b=a;//arrays does not reqs "&" for specipying the address.
    cout<<"address of a is: "<<a<<endl;
   /* for (int i = 0; i < 5; i++)
    {
        cout<<"the value of "<<i<<" is "<<a[i]<<endl;
    }*/
    int i=0;
    while(i<5){
        cout<<"the value of "<<i<<" is "<<a[i]<<endl;i++;
    }
    

return 0;
}