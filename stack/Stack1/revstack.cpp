#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack <int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  stack <int> p;
  stack <int> q;
  while(st.size()>0){
    p.push(st.top());
    st.pop();
  }
  while(p.size()>0){
    q.push(p.top());
    p.pop();
  }
  while(q.size()>0){
    st.push(q.top());
    q.pop();
  }
  while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
  }
  

}