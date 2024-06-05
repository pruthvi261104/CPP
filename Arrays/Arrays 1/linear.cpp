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
  int flag=0;
  for(int i=0;i<n;i++){
    if(a[i]==x){
      flag=1;
      break;
    }
  }
  cout<<endl;
  if(flag==1) cout<<"Element found"<<endl;
  else cout<<"Element not found"<<endl;
}
