#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>morezero(vector<int>v){
    int temp;
    int size=v.size();

    int i=0;

    for(int j=0;j<size;j++){
        if(v[j]!=0){
            swap(v[j],v[i]);//1,2,4,0,0,5,4,0,0,4.
            i++;
        }
    }
    
    
    return v;
}

int main(){
    vector<int>v={1,2,0,4,0,5,4,0,0,4};
    

    vector<int>ans=morezero(v);
   

    for(int i : ans){//ans[i]
        cout<<i<<" ";
    }


    

return 0;
}