#include<iostream>
using namespace std;
int main(){
  int m;
  cin>>m;
  int n;
  cin>>n;
  int a[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
   for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
