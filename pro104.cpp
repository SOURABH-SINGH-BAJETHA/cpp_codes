// // #include<iostream>
// // using namespace std;

// // int main(){
// //     char ch[50]="buddy";
// //     char *c;
// //     c=&ch[0];
// //     cout<<"c : "<<c;
     

// // return 0;
// // }
// #include<iostream>
// using namespace std;

// int main(){                                //PRACTICING  OVER  POINTERS---->(*)-->THIS IS DEREFERANCE OPERATOR.
//    int arr[50]={2,4,6,8,10};
    
//     // int *p=arr;                           //*P=MEANS value at the address p
//     // cout<<*p;
//     // p++;
//     // cout<<"\n"<<*p;
//     // cout<<"\n"<<"size of pointer : "<<sizeof(p);
//     // int a=5;
//     // cout<<*(arr+1);
    
//     int temp[10]={1,2};
//     cout<<temp;
    
    



// return 0;
// }  

#include<iostream>
using namespace std;

void path(int *arr){
    // cout<<"address : "<<arr<<endl;
//cout<<"value   : "<<*arr;
int n;
cout<<"enter the no. of address : ";
cin>>n;

cout<<"address : "<<endl;

for(int i=0;i<=n-1;i++){
    cout<<arr+i<<endl;
}

cout<<"now the value : "<<endl;

for(int i=0;i<=n-1;i++){
    cout<<*(arr+i)<<endl;
}

}




int main(){
    int arr[50],n;
    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter the elemnt of array : ";

    for(int i =0;i<=n-1; i++){
           cin>>arr[i];
    }

    path(arr);

    

return 0;
}