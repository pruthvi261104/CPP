#include<iostream>
using namespace std;
void display(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void change(int b[],int m){
  b[1]=5;
}
int main(){
 int x;
 cin>>x;
 int a[x];
 for(int i=0;i<x;i++){
  cin>>a[i];
 }
//  for(int i=0;i<n;i++){
//   cout<<a[i]<<" ";
//  }
display(a,x);
cout<<endl;
change(a,x);
display(a,x);
// 5
// 12
// 45
// 69
// 90
// 110
// 12 45 69 90 110
// 12 5 69 90 110
// here we can change value of element in an array that can be done because in arrays when ever we are dealing with functions that means arrays are passed by referece
}