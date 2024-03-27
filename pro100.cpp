// #include<iostream>
// using namespace std;

// int lenght(char s1[50]){
//     int i=0;
//     while(s1[i]!='\0'){//lenght--->                                      LENGTH CALCULATE FORMULA : STRING  
//         i++;
//     }
//     return i;
// }

// int main(){
//     char s1[30];
//     int len;
//     printf("enter s1 : ");
//     cin>>s1;

//    len= lenght(s1);
//     cout<<"length of string : "<<len<<endl;

// return 0;
// }


// #include<iostream>
// using namespace std;

// void reverse(char s1[50]){
//      int i=0;
//      while(s1[i]!='\0'){
//          i++;
//      }
//    int  s=0,e=i-1,temp;                                                    //REVERSE : STRING-->
//    while (s<=e)
//    {
//     temp=s1[s];
//     s1[s]=s1[e];
//     s1[e]=temp;
//     s++;e--;
//    }
   


    
// }

// int Main(){
//      char s1[50];
//      cout<<"Enter stirng : ";
//      cin>>s1;

//      reverse(s1);
//      cout<<s1;



// return 0;
// }



// #include<iostream>
// #include<string.h>
// using namespace std;

// int palindrome(char s1[50],char s2[50]){

//     strrev(s1);
//    int len= strlen(s1);                                        //PALINDROM OF STRING : --->
//    int ans;
//    cout<<"length : "<<len<<endl;
//    cout<<"reverse : "<<s1<<endl;
//    cout<<"original :"<<s2<<endl;

//     int s=0,e=len-1;
//     while(s<=e){
//         if(s1[s]!=s1[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     } 
//     return 1;   
// }



// int main(){

//     char s1[50],s2[50];
//     cout<<"enter string : ";
//     cin>>s1;

//     strcpy(s2,s1);

//     int t= palindrome(s1,s2);

//     if(t==1){
//         cout<<"palindrome string ";

//     }
//     else{
//         cout<<"not a palindrome string ";
//     }
  
    

// return 0;
// }

