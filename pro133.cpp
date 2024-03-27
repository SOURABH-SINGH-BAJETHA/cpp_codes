#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "sourabh";
    stack<char>s;

    for(int i = 0 ; i<=str.size()-1; i++){

        char element = str[i];
        s.push(element);

    }

    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    
    cout<<"string  : "<<str<<endl;
    cout<<"reverse : "<<ans<<endl;

    

return 0;
}