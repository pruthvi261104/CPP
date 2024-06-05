#include<iostream>
using namespace std;
class Queue{
  public:
  int f;
  int b;
  int a[5];
  // Queue() : f(0), b(0) {}
  Queue(){
    f=0;
    b=0;
  }
void push(int val){
  if(b==5){
    cout<<"Queue is Full";
    return;
  }
  a[b]=val;
  b++;
}
void pop(){
  if(f-b==0) {
    cout<<"Queue is Empty";
    return;
  }
  f++;
}
int front(){
  if(f-b==0) {
    cout<<"Queue is Empty";
    return -1;
  }
  return a[f];
}
int back(){
  if(f-b==0) {
    cout<<"Queue is Empty";
    return -1;
  }
  return a[b-1];
}
int size(){
  return b-f;
}
bool isEmpty(){
  if(f-b==0) return true;
  else return false;
}
void display(){
   if(f-b==0) {
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