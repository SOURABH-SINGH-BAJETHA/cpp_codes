#include<iostream>
using namespace std;

void merge(int *arr, int s,int e){

    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    for(int i = 0 ; i<len1 ; i++){
        first[i] = arr[k++];
    }
    k = mid+1;

    for(int i = 0; i<len2 ; i++){
        second[i] = arr[k++];
    }

    int ind1 = 0;
    int ind2 = 0;
    k = s;

    while(ind1<len1 && ind2<len2){
        if(first[ind1]<second[ind2]){
            arr[k++] = first[ind1++];
        }
        else{
            arr[k++] = second[ind2++];
        }

    }

    while(ind1 < len1){
        arr[k++] = first[ind1++];
    }
    while(ind2 < len2){
        arr[k++] = second[ind2++];
    }


}

void mergeSort(int *arr, int s, int e){

    if(s>=e){
        return ;
    }

    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
    
}

int main(){

    int arr[5] = {5,3,4,7,2};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(auto i : arr){
        cout<<i<<"     ";
    }

return 0;
}