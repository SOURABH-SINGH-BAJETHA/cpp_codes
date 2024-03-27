#include<iostream>
#include<deque>
using namespace std;

int main(){
    int i,size;

    deque<int>d;

    d.push_back(10);
    d.push_front(4);
    size= d.size();

    // for(i=0;i<size;i++){
    //     cout<<d[i]<<" ";
    // }

    // d.pop_back();
    // size= d.size();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<"index : "<<d.at(1);



    

return 0;
}