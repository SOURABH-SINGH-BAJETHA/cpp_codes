
//this program is for understanding of FOR AND BREAK,CONTINUE STATEMENT
#include<iostream>
using namespace std;

int main(){

for(int i=1;i<=10;i++){
    cout<<"Hello jarvis!"<<endl;
}
for(int a=1;a<=10;a++){
    if(a==7){break;}//break is used for stoping the chain.
    cout<<a<<endl;
}
for(int b=1;b<=10;b++){
    if(b==6){cout<<"your rank:";} //not only break we can write anything we want to.
cout<<b<<endl;}
for(int c=1;c<=10;c++){
    if(c==4){continue;}//continue is to skip the line.
    cout<<c<<endl;
}


return 0;
}