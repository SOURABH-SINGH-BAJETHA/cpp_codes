#include<iostream>
using namespace std;

int main(){                 // _ _ _ *
                            // _ _ * *
    int a;                  // _ * * *
    cout<<"enter number : ";// * * * *
    cin>>a;

    for(int i=1;i<=a;i++){                                 
             

            for(int space=a-i;space;space--){
                cout<<"_ ";

            }
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;

                                                            
        
    }

return 0;
}