#include<iostream>
using namespace std;

int main(){
    int d,year,month;
    cout<<"enter days: "<<endl;
    cin>>d;

    year=d/365;    // eg= 400
    month=(d%365)/30;//--35/30
    d=(d%365)%30;

    
    //d=d%365;

    cout<<"year : "<<year<<endl;
    cout<<"month :"<<month<<endl;
      cout<<"days :"<<d<<endl;
    


    
    

    











    return 0;
}