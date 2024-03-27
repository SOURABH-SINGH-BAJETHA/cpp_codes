#include<iostream>
using namespace std;

int main(){
    int second;
    cout<<"enter second : ";
    cin>>second;

    int hours=second/(60*60);
    second=second%(60*60);
    int minute=second/60;
    second=second%60;

    cout<<"hours : "<<hours<<endl;
    cout<<"minutes : "<<minute<<endl;
    cout<<"second : "<<second<<endl;

return 0;
}