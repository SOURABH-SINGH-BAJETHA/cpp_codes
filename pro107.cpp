#include<iostream>
#include<math.h>
using namespace std;    // wirte a cpp to print quadratic equation by using pointer --->

void find_roots(int a,int b,int c,float * p,float *q){

    *p= (float)(-b + sqrt(b*b-4*a*c))/2*a;
    *q= (float)(-b - sqrt(b*b-4*a*c))/2*a;
}

int main(){

    int n,a,b,c;
    float r1,r2;

    cout<<"enter a, b & c respectively : ";
    cin>>a>>b>>c;

    find_roots(a,b,c,&r1,&r2);

    cout<<"r1 : "<<r1;
    cout<<"r2 : "<<r2;



    


return 0;
}