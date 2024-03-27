#include<iostream>

using namespace std; 



void f(int n,int i){
	
	if(i>n){
		return ;
	}
	
	f(n,i+1);
	
	cout<<i<<endl;
	

	
}



int main(){
	
	int n;
	cout<<"Enter number : ";
	cin>>n;
	int i  = 1;
	
	f(n,i);
	return 0;
}