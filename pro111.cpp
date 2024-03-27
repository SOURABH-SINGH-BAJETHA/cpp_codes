#include<iostream>   //print counting 
using namespace std;

void print_counting(int n){
      
      if(n==0){
        return ;
      }

      cout<<n<<"  ";

     print_counting(n-1);

}

int main(){

    int n;

    cout<<"Enter the number : ";
    cin>>n;

    print_counting(n);

return 0;
}