//given an array return the element in which all other numbers in the array are repeated twice and other numbers are repeated once return the number which is repeated once
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int res=0;
  for(int i=0;i<n;i++){
    res=res^a[i];
  }
  cout<<res<<endl;
}