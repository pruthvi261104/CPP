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
    for(int k=i;k<n;k++){
      for(int j=i;j<=k;j++){
        cout<<a[j]<<" ";
      }
      cout<<endl;
    }
  }
}