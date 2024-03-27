
//this program is for understanding of SWITCH,GLOBAL VARIABLE.

#include<iostream>
using namespace std;

int a=4;
int main(){
    int a=5;
cout<<::a<<endl;//if we had to print global variable even if local variable is there then :: is used
int age;
cout<<"enter age"<<endl;
cin>>age;
switch (age)
{
case 18:cout<<"allowed for party";
    break;
    case 22:cout<<"allowed to drink";break;
    case 44:cout<<"aged person are not allowed";break;
    

default:cout<<"do not do fun, tell the correct age";
    break;
}




return 0;
}