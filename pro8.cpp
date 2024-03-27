
//this program is for understanding of POINTERS
#include<iostream>
using namespace std;
//pointer are the datatype which can hold the value and address of another datatype.
int main(){

int a=12;
int* b=&a;
cout<<"the value of b is:"<<*b<<endl;
cout<<"the address of a is :"<<b<<endl;//this line and below line have same meaning as 
cout<<"the address of a is :"<<&a<<endl;// BECAUSE of line 8

return 0;
}