
//FUNDTION OVERLOADING

#include<iostream>
using namespace std;

int sum(int x,int y,int z){cout<<"using 3 var : ";
    return (x+y+z);
}

int sum(int x, int y){cout<<"using 2 var : ";
    return (x+y);
}

int main(){
    cout<<"sum of 2 numbers "<<sum(5,3)<<endl;//compiler will automatically put these value
    cout<<"sum of 3 numbers "<<sum(4,3,8)<<endl;//according to the required function.



return 0;
}