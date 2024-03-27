#include<iostream>
using namespace std;

class heap{

    public:
     int arr[50];
     int size = 0;

     heap(){
        arr[0] = -1;
        size = 0;
     }

     void insert(int data){           //insertion code for heap : --->
        
        size = size + 1;
        int index = size;
        arr[index] = data;

        while(index>1){
            int parent = index/2;

            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }

            else{
                return ; 
            }
        }



     }

     

     void deletion(){
        
        arr[1] = arr[size];
        size--;   //remove element
        
        int index = 1;
        while(index <= size){
            
            int rightpart = 2*index;
            int leftpart = 2*index+1;

            if(leftpart <= size && arr[index] < arr[leftpart]){
                swap(arr[leftpart], arr[index]);
                index = leftpart;
                
            }

            else if(rightpart <= size && arr[index] < arr[rightpart]){
                swap(arr[rightpart], arr[index]);
                index = rightpart;
                
            }

            else{
                return;
            }

        }
        
     }

     void print(){
        for(int i = 1 ; i<=size ; i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
     }

};

int main(){

    heap h1;

    h1.insert(5);
    h1.insert(6);
    h1.insert(7);
    h1.insert(2);
    h1.insert(9);
    h1.insert(4);

    

    h1.print();
    h1.deletion();
    h1.print();
     
    
    



return 0;
}