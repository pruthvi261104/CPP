#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
  unordered_set<int> u;
  u.insert(3);
  u.insert(2);
  u.insert(5);
  //for each loop
  // for(int x: u){
  //   cout<<x<<" ";
  // }
  //Delete operations
  // u.erase(2);
  //finding size
  // cout<<u.size()<<endl;
  //Finding target element
  int target=5;
  //s.find() searches in set if not found returns s.end() which is iterator next to value in set
  if(u.find(target)!=u.end()){
    cout<<"exists";
  }else{
    cout<<"Does not exists";
  }

}