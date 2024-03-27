#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter your marks:";
    cin>>a;
    if (a<=100 && a>=90)
    {
        cout<<"you got A1 CGPA";
    }
   else if(a>80 && a<90  ){
        cout<<"you got A2 CGPA";
    }
    else if(a>70 && a<=80){
        cout<<"you got B1 CGPA";
    }
    else if(a>60 && a<=70){
        cout<<"you got B2 CGPA";
    }
    else if(a>50 && a<=60){
        cout<<"you got C1 CGPA";
    }
    else if (a>40 && a<=50){
        cout<<"you got C2 CGPA";
    }
    else if (a>=33 && a<=40){
        cout<<"you got D CGPA";
    }
    else if (a<33 && a>=0){
        cout<<"you are fail";
    }
    else{cout<<"wrong marks";}

    


return 0;
}
