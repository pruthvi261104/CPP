#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v;
  v.push_back(25);
  cout<<v.capacity()<<endl;
  v.push_back(30);
  cout<<v.capacity()<<endl;
  v.push_back(40);
  cout<<v.capacity()<<endl;
  v.push_back(90);
  cout<<v.capacity()<<endl;
  
  // cout<<v[0]<<" ";
  // cout<<v[1]<<" ";
  // cout<<v[2]<<" ";
  // cout<<v[3]<<" ";
  // cout<<v[3]<<" ";
  // cout<<v[4]<<" ";


}