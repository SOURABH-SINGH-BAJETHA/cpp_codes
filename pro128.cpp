#include<iostream>
using namespace std;

class node{      //single node tyyar :--

    public :
    int data;
    node* next;

    node(int data){
        this ->data = data;
        this ->next = NULL;
    }

};

void insertathead(node*& head,int d){
    node* temp = new node(d);
    temp ->next = head;
    head = temp;
}

void print(node*& head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp ->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}



int main(){

    node* n1 = new node(10);   
    node* head = n1;
   // head = n1;

    insertathead(head,12);
    insertathead(head,15);

    print(head);
    
    

return 0;
}