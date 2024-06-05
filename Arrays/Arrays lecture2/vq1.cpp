//last occurence of given element
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v;
  v.push_back(10);
  v.push_back(9);
  v.push_back(30);
  v.push_back(9);
  v.push_back(12);
  v.push_back(9);
  int x=9;
  int idx=-1;
  for(int i=0;i<v.size();i++){
    if(v[i]==x) idx=i;
  }
  cout<<idx;
  //similarly we can do it from back also
  // for(int i=v.size()-1;i>=0;i--){
  //   if(v[i]==x) idx=i;
  //   break;
  // }
  // cout<<idx;
}