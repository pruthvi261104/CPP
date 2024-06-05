#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack <int> s;
  s.push(10);
  s.push(25);
  s.push(30);
  s.push(49);
  s.push(50);
  while(s.size()>0){
    cout<<s.top()<<" ";
    s.pop();
  }
  //we can use another stack to shift the elements so that we can conserve
  stack<int> temp;
  while(s.size()>0){
    cout<<s.top()<<" ";
    int x;
    x=s.top();
    s.pop();
    temp.push(x);
  }
  //now elements are in rev order
  //temp stack is full now shift this ele into same stack
  while(temp.size()>0){
    int y;
    y=temp.top();
    temp.pop();
    s.push(y);
  }
  cout<<s.top()<<endl;
}