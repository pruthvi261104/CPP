#include<iostream>
#include<vector>
using namespace std;
void combo(int n,int a[],vector<int> v,int idx,int target){
  //Base case
  if(target==0){
    for(int i=0;i<v.size();i++){
      cout<<v[i]<< " ";
    }
    cout<<endl;
    return;
  }
  if(target<0) return;

  for(int i=idx;i<n;i++){
    v.push_back(a[i]);
    combo(n,a,v,i,target-a[i]);
    v.pop_back();
  }
}
int main(){
  int a[]={2,3,5};
  int n=sizeof(a)/sizeof(a[0]);
  vector<int> v;
  combo(n,a,v,0,8);
}