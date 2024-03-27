#include<iostream>
#include<queue>
using namespace std;

class node{
    
    public : 
      int data;
      node* left;
      node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }  


};

node* forming_tree(node * root){
    
    cout<<"Enter data : ";
    int d;
    cin>>d;

    root  = new node(d);

    if(d == -1){
        return NULL;
    }
    
    cout<<"Enter left value of data "<<d<<endl;
    root->left = forming_tree(root->left);

    cout<<"Enter right value of data "<<d<<endl;
    root->right = forming_tree(root->right);

    return root;


}


void transversal(node* root){
    
    queue<node*>q;

   

    q.push(root);
    q.push(NULL);

    while(!q.empty()){

         node* temp = q.front();
         q.pop();

       if(temp == NULL){
        cout<<endl;
        

        if(!q.empty()){
            q.push(NULL);
        }
       }

       else{
        cout<<" "<<temp->data<<"  ";
        
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

       }
    }
}



int main(){

    node * root = NULL;
    root = forming_tree(root);
    transversal(root);

    


return 0;
}
