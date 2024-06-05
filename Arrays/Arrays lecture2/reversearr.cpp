#include<iostream>
using namespace std;
void display(int b[],int x){
  for(int i=0;i<x;i++){
    cout<<b[i]<<" ";
  }
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  display(a,n);
  int i=0;
  int j=n-1;
  while(i<=j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  cout<<endl;
  display(a,n); 
}