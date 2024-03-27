#include<iostream>
using namespace std;                 //insertat back code -->

class node{

    public : 
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertattail(node*&tail,int data){

    node* temp = new node(data);
    tail->next = temp;
    tail= temp;




}

void insertathead(node*& head,int d){
    node* temp = new node(d);
    temp ->next = head;
    head = temp;
}

void print(node* &head){
    node*temp = head;
    while(temp!=NULL){
    cout<<temp->data<<"  ";
    temp = temp->next;
    }
   cout<<endl;
}

void deletion(node* & head , int position){
    
    node* temp = head;
    if(position==1){
        head=head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        node* current = head;
        node* previous = NULL;

        int c =1;
        while(c<position){
            previous = current;
            current = current->next;
            c++;
        }

        previous->next = current -> next;
        current ->next = NULL;
        delete current;
    }
    

}

void insertatposition(node*&head, node*&tail, int position , int data){

    node* temp = head;
    
    if(position==1){
        insertathead(head,data);
        
    }

    else if(temp->next == NULL){
        insertattail(tail,data);
        
    }

    else{
        int c = 1;
        while(c<position-1){
            temp = temp->next;
            c++;
        }

        node* newindex = new node(data);
        newindex->next = temp->next;
        temp -> next = newindex;

    }

}

void reverse(node* &head){
    
    node* temp = head;

    
        
        node* previous = NULL;
        node* current = head;

        while(current != NULL){
             
            node* forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
            head = previous;

        }

        

    

}







int main(){

    node* n1 = new node(10);
    node*tail = n1;
    node*head = n1;
    insertathead(head,10);
    insertathead(head,12);
    insertathead(head,15);
    insertathead(head,17);
    insertathead(head,20);
    print(head);
    reverse(head);
    


    

    print(head);

    



return 0;
}