#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(12);
    v.push_back(21);
    v.push_back(31);
    v.push_back(121);
    v.push_back(131);
    v.push_back(200);

    cout<<"finding of : "<<binary_search(v.begin(),v.end(),121)<<endl;

    string a="abcd";
    reverse(a.begin(),a.end());
    cout<<"reverse of : "<<a<<endl;
    
    
return 0;
}