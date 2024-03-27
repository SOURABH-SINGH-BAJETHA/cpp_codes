//revision-->c++

#include<iostream>
using namespace std;
int a=3;

int main(){
//     int a=2;
//     //cout<<a;
// cout<<::a<<endl;//global vaiable;
// // int marks;
// cout<<"enter marks:"<<endl;//out of thirty
// cin>>marks;
// switch(marks){

//     case 30: cout<<"keep it up";break;//<<endl;
//     case 20: cout<<"good but need improvement";break;//<<endl;
//     case 10:cout<<"need a lot of improvement";break;//<<endl;

//     default : cout<<"no such cases"<<endl;
// }

// for(int i=1;i<=100;i++){
//     cout<<i<<endl;
// }
// int i=1;
// while(i<=100){
//     cout<<i<<endl;i++;
// // }
// int a=3;// pointer
// int* b=&a;
// cout<<*b;
int marks[]={1,23,45,34,22,56,78,44,33};
cout<<marks[0];// arrays pointers 
for(int i= 1;i<10;i++){
    cout<<"the value of "<< i<<" is "<<marks[i]<<endl;

}





return 0;
}