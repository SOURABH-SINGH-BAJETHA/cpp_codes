#include<iostream>
using namespace std;

int sum(int x,int y);// this is function prototype,which gives the assurity of the function coming later onwards.kj

int main(){

int a,b;
cout<<"1st number"<<endl;
cin>>a;
cout<<"2nd number"<<endl;
cin>>b;
cout<<"product of both number:"<<sum(a,b)<<endl;


return 0;}

int sum(int x,int y){  

    return x*y;
}