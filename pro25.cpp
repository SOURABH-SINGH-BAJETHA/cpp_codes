#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter year : ";
    cin>>year;

    if(year%400==0){
        cout<<"is a leap year "<<endl;

    }
    else if(year%100==0){
        cout<<"not a leap year "<<endl;
    }
    else if(year%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"not  a leap year ";
    }

return 0;
}