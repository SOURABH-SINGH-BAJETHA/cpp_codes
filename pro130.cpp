#include<iostream>
using namespace std;     //circular linked list : ---

class node{
    public : 
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = next;
    }
};

void insertatposition(node*& tail, int element, int data){

     node* temp = tail;

     if(temp == NULL){
        node* insert = new node(data);
        insert->next = insert;
        tail = insert;
     }  

     else {

        while(temp->data!=element){
            temp = temp->next;

        }   
        node* newnode = new node(data);
        newnode->next = temp->next;
        temp->next = newnode;

     }

}


void print(node*& tail){

    node* temp = tail;
    do{
        cout<<temp->data<<"  ";
        temp = temp->next;
    }while(temp!=tail);

    cout<<endl;

}

void deletion(node* &tail, int data){

    
    node* previous = tail;
    node* current = previous->next;

    if(tail==NULL){
        cout<<"linked list is empty, please put element ant try again ";

    }

    else if(current == previous){
        current->next=NULL;
        delete current;
    }

    else{
        while(current->data != data ){
            previous = current;
            current = current->next;
            if(tail==current){
            cout<<"list repeated , no element found "<<endl;
            return;
        }
        }
        
        previous->next = current->next;
        current->next = NULL;
        delete current;
        
    }


}


int main(){

    node* tail = NULL;
    insertatposition(tail,5,10);
    print(tail);
    insertatposition(tail,10,12);
    print(tail);
    insertatposition(tail,10,11);
    print(tail);
    insertatposition(tail,12,15);
    print(tail);
    
    


    

return 0;
}