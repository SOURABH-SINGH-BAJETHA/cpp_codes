#include<iostream>
using namespace std;

int f(int arr[],int s,int e){
    
    int pivot = arr[s];
    int cnt = 0;
    
    for(int i = s+1; i<=e ; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;

    swap(arr[pivotIndex],arr[s]);

    int i = s,j=e;
    

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;


    
}

void quickSort(int arr[], int s,int e){

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = f(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main(){
    
    int arr[13] = {5,3,4,7,65,66,77,34,21,12,45,78,2};
    int n = 13;

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


return 0;
}