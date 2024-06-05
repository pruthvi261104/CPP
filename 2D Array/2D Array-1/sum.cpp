#include<iostream>
#include<climits>
using namespace std;
int main(){
  int m;
  cin>>m;
  int n;
  cin>>n;
  int a[m][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  int sum=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sum+=a[i][j];
    }
  }
  cout<<sum;
}