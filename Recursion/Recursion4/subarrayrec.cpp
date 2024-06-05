#include<iostream>
#include<vector>
using namespace std;
void printsubarray(int n,int a[],vector<int> v,int idx){
  if(idx==n){
    for(int i=0;i<v.size();i++){
      cout<<v[i];
    }
    cout<<endl;
    return;
  }
  printsubarray(n,a,v,idx+1);
  if(v.size()==0 || a[idx-1]==v[v.size()-1]){
    v.push_back(a[idx]);
    printsubarray(n,a,v,idx+1);
 }
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<int> v;
  printsubarray(n,a,v,0);
}