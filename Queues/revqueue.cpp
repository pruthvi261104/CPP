//reverse of queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &q){
  int n=q.size();
   for(int i=0;i<n;i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
void revqueue(queue <int>&q){
  stack <int>st;
  int n=q.size();
  for(int i=0;i<n;i++){
    int x=q.front();
    q.pop();
    st.push(x);
  }
  int r=st.size();
  for(int i=0;i<n;i++){
    int x=st.top();
    st.pop();
    q.push(x);
  }
 
}
int main(){
  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  display(q);
  revqueue(q);
  display(q);

}