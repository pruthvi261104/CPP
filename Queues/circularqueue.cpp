#include<iostream>
#include<vector>
using namespace std;
class CQueue{
  public:
  int f;
  int b;
  int s;
 vector<int> a;
  // Queue() : f(0), b(0) {}
  CQueue(int val){
    f=0;
    b=0;
    vector <int> v(val);
    a=v;
  }
void push(int val){
  if(b==a.size()){
    cout<<"Queue is Full";
    return;
  }
  a[b]=val;
  b++;
  s++;
}
void pop(){
  if(s==0) {
    cout<<"Queue is Empty";
    return;
  }
  f++;
  s--;
}
int front(){
  if(s==0) {
    cout<<"Queue is Empty";
    return -1;
  }
  return a[f];
}
int back(){
  if(s==0) {
    cout<<"Queue is Empty";
    return -1;
  }
  return a[b-1];
}
int size(){
  return b-f;
}
bool isEmpty(){
  if(s==0) return true;
  else return false;
}
void display(){
   if(s==0) {
    cout<<"Queue is Empty";
    return;
  }
  for(int i=f;i<b;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
};

int main(){
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.display();
  q.pop();
  q.pop();
  q.pop();
  q.display();
}