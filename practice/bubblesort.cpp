#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  int temp;
  cin>>n;
  int a[n];
  // vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
      // swap(a[j],a[j+1]);
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++){
    // cout<<"The so";
    cout<<a[i]<<" ";
  }

}

