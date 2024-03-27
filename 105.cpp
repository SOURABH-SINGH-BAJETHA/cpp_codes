#include<bits/stdc++.h>
using namespace std;

int main(){

    set<string>s;

    string arr[5] = {"aaaaaaa","absda","hjekk","asdfg","aaaaaaa"};

    for(auto i: arr){
        s.insert(i);
        
    }

    for(auto i : s){
        cout<<"size : "<<i.size()<<endl;
    }

    

return 0;
}