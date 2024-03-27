#include<iostream>
#include<vector>
using namespace std;      //revision code of morezero :--->

int main(){
    vector<int>v={2,3,5,0,21,0,0,3,0,4,8,0};//{2,3,5,21,3,4,8,0,0,0,0,0}
    int size=v.size();

    int i=0;
    for(int j=0;j<=size-1;j++){
        if(v[j]!=0){
            swap(v[j],v[i]);
            i++;
        }
    }

    for( i=0;i<=size-1;i++){
        cout<<v[i]<<" ";
    }




return 0;
}