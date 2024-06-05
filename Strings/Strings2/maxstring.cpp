#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  string a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int max=stoi(a[0]);
  for(int i=1;i<n;i++){
    int x=stoi(a[i]);
    if(x>max) max=x;
  }
  cout<<max<<endl;
}