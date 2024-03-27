#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Given an array of nonnegative integers, design an algorithm and a program to count the 
number of pairs of integers such that their difference is equal to a given key, K.*/

int main(){

    cout<<"Enter range  : "<<endl;
    int n;
    cin>>n;

    vector<int>v;

    
     
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    cout<<"Enter Key : "<<endl;
    int k;
    cin>>k;
    int cnt = 0;

    for(int i = 0 ; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(abs(v[i]-v[j]) == k ){
                cnt++;
            }
        }
    }

    cout<<"Given Array : "<<endl;
    for(auto i : v){
        cout<<i<<"     ";
    }

    cout<<"\nCount is : "<<cnt;



    
    

return 0;
}