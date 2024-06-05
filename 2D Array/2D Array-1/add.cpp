#include<iostream>
using namespace std;
int main(){
  int r1;
  cin>>r1;
  int c1;
  cin>>c1;
  int a[r1][c1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>a[i][j];
    }
  }  
  int r2;
  cin>>r2;
  int c2;
  cin>>c2;
  int b[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>b[i][j];
    }
  }
  int res[r1][c1];
  // for(int i=0;i<r1;i++){
  //   for(int j=0;j<c1;j++){
  //     res[i][j]=a[i][j]+b[i][j];
  //   }
  // }
  //Without using extra array
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<a[i][j]+b[i][j]<<" ";
    }
    cout<<endl;
  }
  
}