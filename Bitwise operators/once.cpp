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
    cin>>a[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
        count++;
        break;
      }
    }
  }
  for(int i=0;i<n;i++){
    bool isDup=false;
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
        bool isDup=true;
        break;
      }
    }
    if(!isDup) cout<<a[i]<<" ";
  }
}