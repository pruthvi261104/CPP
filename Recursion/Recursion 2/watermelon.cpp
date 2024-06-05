#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int evenc=0;
  int oddc=0;
  int eveni;
  int oddi;
  for(int i=1;i<n;i++){
    if(a[i]%2==0){
      evenc++;
      eveni=i;
    }
    else{
      oddc++;
      oddi=i;
    }
  }
  if(evenc>oddc) cout<<oddi;
  else cout<<eveni;
}