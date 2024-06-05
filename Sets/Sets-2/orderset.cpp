#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
  set <int> s;
s.insert(3);
s.insert(9);
s.insert(69);
s.insert(25);
s.insert(30);
s.insert(20);
s.insert(89);
s.insert(45);
for(auto p:s){
  cout<<p<<" ";
}
}