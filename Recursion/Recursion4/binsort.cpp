#include<iostream>
using namespace std;
void binsort(int n,int a[]){
  int i=0;
  int j=n-1;
  while(i<j){
    while(i<n && a[i]==0) i++;
    while(j>=0 && a[i]==1) j--;
    if(i<j) swap(a[i],a[j]);
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<< " ";
  }
}
int main(){
  int a[]={0,0,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,1,0,0,1,1,1,1};
  int n=sizeof(a)/sizeof(a[0]);
  binsort(n,a);
}