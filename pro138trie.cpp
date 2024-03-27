#include<iostream>
#include<string>
using namespace std;

class trienode{

    public:
     char ch;
     trienode* children[26];
     bool terminal ;

    
    trienode(char data){
       ch = data;
       for(int i = 0 ; i<=25 ; i++){
            children[i] = NULL;
       }
       terminal = false;
    }

};

class trie{
     
    public:
      trienode* root;

      trie(){
        //cout<<"constructer called";
        root = new trienode('\0');
      }
    
    trienode* child;
    void insert(trienode* root, string word){
         
        int index = word[0]-'a';
        if(word.size()==0){
           root->terminal = true;
           return;
        }

        if(root->children[index] != NULL){ //present
             child = root->children[index];
        }
        else{//absent
             child = new trienode(word[0]);
             root->children[index] = child;
        }

        insert(child,word.substr(1));

    }

    void insertvoid(string word){
        insert(root,word);
    }


};


int main(){

    trie* t = new trie();

    string word;
    cout<<"Enter string :";
    cin>>word;
    t->insertvoid(word);
    

return 0;
}