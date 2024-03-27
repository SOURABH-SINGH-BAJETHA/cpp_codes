#include<iostream>
#include<array>
using namespace std;                                  //tuitorial code for STL in array---->

int main(){


    array<int,4>a={1,2,3,4};
    int size=a.size();

    for(int i=0;i<size;i++){

        cout<<a[i]<<endl;

    }
    cout<<"element at second index : "<<a.at(2)<<endl;
    cout<<"empty or not : "<<a.empty()<<endl;//0 for false and 1 for true
    cout<<"last element : "<<a.back()<<endl; 


return 0;
}