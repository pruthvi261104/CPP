#include<iostream>
using namespace std;
int main(){
  int r1,c1;
  cin>>r1>>c1;
  int a[r1][c1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // for(int i=0;i<r1;i++){
  //   if(i%2==0){
  //     for(int j=0;j<c1;j++){
  //       cout<<a[i][j]<<" ";
  //     }
  //   }
  //   else{
  //     for(int j=c1-1;j>=0;j--){
  //       cout<<a[i][j]<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }
  //Different Pattern
  for(int j=0;j<r1;j++){
    for(int i=0;i<c1;i++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}