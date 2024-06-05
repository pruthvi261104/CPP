//transpose of mat using swapping
//Note:here we can use only square matrix
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
  for(int i=0;i<m;i++){
    for(int j=i+1;j<n;j++){
      int temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
  }
  cout<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
   
   
}
