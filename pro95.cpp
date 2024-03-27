#include<iostream>
#include<vector>
using namespace std;                                  //tuitorial code for STL in array---->

int main(){

    vector<int>v;
 //   int size=v.size();

    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(22);

    cout<<"capacity : "<<v.capacity()<<endl;;
    v.push_back(22);

    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(25);

    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(22);
    cout<<"size : "<<v.size();
     cout<<"\n index at 2 is : "<<v.at(2);


return 0;
}