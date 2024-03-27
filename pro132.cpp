#include<iostream>
//#include<stack>
using namespace std;

class stack{
	
	public : 
	int *arr;
	int size;
	int top;
	
	stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}
	
	void push(int data){
		
		if(size-top > 1){
            top++;
			arr[top] = data;
		}
		else{
			cout<<"stack overflow "<<endl;
		}
	}
	
	int peek(){
		if(top >=0){
		  return arr[top];
	    }
	    else{
	    	cout<<"stack is empty"<<endl;
	    	return -1;
		}
	}
	
	void pop(){
		if(top>=0){
			top --;
		}
		else{
			cout<<"stack is empty "<<endl;
		}
	}
	
	bool empty(){
		if(top >=0){
			cout<<"stack is not empty"<<endl;
			return false;
		}
		else{
			cout<<"stack is  empty"<<endl;
			return true;
		}
	}
	
};



int main(){

    stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"top element : "<<s.peek()<<endl;
    
    cout<<"strnig is empty : "<<s.empty()<<endl;
    
    s.pop();
    
    cout<<"new top : "<<s.peek()<<endl;
    

return 0;
}