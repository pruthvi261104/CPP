#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  int x=30;
  int count=0;
  for(int i=0;i<n;i++){
    if(a[i]>x){
      count++;
    }
  }
  cout<<endl;
  cout<<count<<endl;
}