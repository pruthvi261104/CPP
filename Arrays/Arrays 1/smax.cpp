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
  int max=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  int smax=INT16_MIN;
  for(int i=0;i<n;i++){
    if(smax<a[i] && a[i]!=max) smax=a[i];
  }
  cout<<endl;
  cout<<smax;

}