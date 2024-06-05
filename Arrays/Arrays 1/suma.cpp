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
  int sum=0;
  for(int i=0;i<n;i++){
    // sum+=a[i];
    sum=sum+a[i];
  }
  cout<<endl;
  cout<<sum<<endl;

}