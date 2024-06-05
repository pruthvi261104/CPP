//at and sort operations demonstration
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector <int> v;
  v.push_back(10);
  v.push_back(291);
  v.push_back(30);
  v.push_back(34);
  v.push_back(12);
  v.push_back(9);
  // cout<<v.at(2);//this is to fetch the value at index 2
  // cout<<endl;
  // v.at(2)=25;//this is to modify the value at index 2
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }


}