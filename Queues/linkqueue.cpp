#include<iostream>
using namespace std;
class Node{
  public:
  Node* next;
  int val;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
class LLQueue{
  public:
  Node* head;
  Node* tail;
  int size;
  LLQueue(){
    head=tail=NULL;
    size=0;
  }
  void push(int val){ //implementing push function using insert at end
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
      tail->next=temp;
      tail=temp;
    }
    size++;
  } 
  void pop(){//pop implementing using delete at front
    if(size==0){
      cout<<("Queue is Empty");
      return;
    }
    else{
      Node* temp=head;
      head=head->next;
      delete temp;
    }
    size--;
  }
  int front(){
    if(size==0){
      cout<<("Queue is Empty");
      return -1;
    }
    return head->val;
  }
  int back(){
    if(size==0){
      cout<<("Queue is Empty");
      return -1;
    }
    return tail->val;
  }
  int length(){
    return size;
  }
  void display(){
    if(size==0){
      cout<<("Queue is Empty");
      return;
    }
    Node* temp=head;
    while(temp){
      cout<<temp->val<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  bool isEmpty(){
   return size==0;
  }
};
int main(){
  LLQueue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.display();
  q.pop();
  q.display();
  cout<< q.front()<<endl;
  cout<< q.back()<<endl;
  cout<<q.length()<<endl;

}