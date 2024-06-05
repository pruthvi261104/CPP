// #include<iostream>
// using namespace std;
// class Stack{
//   public:
//   static const int MAX_SIZE=100;
//   int a[MAX_SIZE];
//   int top;
//   int idx;
//   Stack(){
//     idx=-1;
//   }
//   void push(int val){
//     if(idx==5){
//       cout<<"Stack Overflow"<<endl;
//       return;
//     }
//     idx++;
//     a[idx]=val;
//   }
//   void pop(){
//      if(idx==-1){
//       cout<<"Stack Underflow"<<endl;
//       return;
//      }
//      idx--;
//   }
//   void printstack(){
//     if(idx==-1){
//       cout<<"Stack is Empty";
//       return;
//     }
//     else{
//       for(int i=idx;i>=0;i--){
//         top--;
//         cout<<a[i]<<" ";
//       }
//     }
//   }
//   // int top(){
//   //   return a[idx];
//   // }
//   int size(){
//     return idx+1;
//   }
// };
// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.pop();
//     st.printstack();
//     cout<<endl;
    
    
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    cin.ignore();
    string arr[t];
    int top=-1;
    for(int i=0;i<t;i++){
        getline(cin,arr[i]);
    }
    int j=0;
    string  temp[t];
 for(int i=0;i<t;i++){
    string  str=arr[i];
     if(str[0]=='p' &&str[1]=='u'){
         temp[j]=arr[i];
         top=j;
         j++;
     }
     else if(str=="pop"){
         if(j>0){
             j=j-1;
         }
         if(top==-1){
             cout<<"Empty";
         }
         else{
string k=temp[top];
             for(int c=5;c<k.length();c++){
                 cout<<k[c];
             }
             top--;
             
         }
         cout<<"\n";
     }
    
 }    return 0;
}