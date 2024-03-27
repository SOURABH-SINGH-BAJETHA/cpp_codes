#include<iostream>
using namespace std;

int main(){

    int unit,bill,a;

    cout<<"enter power unit consumption : ";
    cin>>unit;

    if(unit<=1000){
        a=5;
    }

   else if(unit>1000 && unit<=2000){

        a=6;
    }

    else if(unit>2000){

        a=7;
    }
    cout<<"bill is :"<<unit*a;








return 0;
}