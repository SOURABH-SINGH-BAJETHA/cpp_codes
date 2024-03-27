#include<iostream>
using namespace std;

class heap{

    public:
    int arr[100];
    int size;

    heap(){
        size = 0;
        arr[size] = -1;
    }

    void insert(int data){

        size+=1;
        arr[size] = data;
        int index = size;

        while(index>1){
            int par = index/2;

            if(arr[par] < arr[index]){          
                swap(arr[par],arr[index]);
            }
            else{
                return ;
            }

            index = par;
        }

    }

    void deletion(){

        arr[1] = arr[size];
        int index = 1;

        size--;
        while(index < size){
            if(index <= size && arr[index] < arr[2*index] ){
                swap(arr[index],arr[2*index]);
                index = 2*index;
            }
            else if(index <= size && arr[index] < arr[2*index + 1]){
                swap(arr[index],arr[2*index+1]);
                index = 2*index+1;
            }
            else{
                return;
            }
        }
    }

    void display(){
        for(int i = 1 ; i<= size ; i++){
            cout<<arr[i]<<"   ";
        }
        cout<<endl;
    }

    
};

int main(){

    heap h;

    h.insert(10);
    h.insert(80);
    h.insert(60);
    h.insert(70);
    h.insert(73);
    h.insert(50);

    h.display();
    h.deletion();
    h.display();



return 0;
}